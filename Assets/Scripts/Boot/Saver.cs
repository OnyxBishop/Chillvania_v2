using System.IO;
using UnityEngine;

public static class Saver 
{
    private static string _directory = "/SaveData/";
    private static string _fileName = "progress.txt";

    public static void Save(SaveFile file)
    {
        string dir = Application.persistentDataPath + _directory;

        if(!Directory.Exists(dir))
            Directory.CreateDirectory(dir);

        string json = JsonUtility.ToJson(file);
        File.WriteAllText(dir + _fileName, json);
    }

    public static SaveFile Load()
    {
        string fullPath = Application.persistentDataPath + _directory + _fileName;
        SaveFile file = new SaveFile();

        if (File.Exists(fullPath))
        {
            string json = File.ReadAllText(fullPath);
            file = JsonUtility.FromJson<SaveFile>(json);
        }

        return file;
    }
}
