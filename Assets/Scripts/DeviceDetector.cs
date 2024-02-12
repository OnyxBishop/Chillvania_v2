using Agava.WebUtility;
using System.Runtime.InteropServices;
using UnityEngine;

public static class DeviceDetector
{
    public static bool IsMobile
    {
        get
        {
            if (WebApplication.IsRunningOnWebGL)
                return GetDeviceIsMobile();

            return SystemInfo.deviceType == DeviceType.Handheld;
        }
    }

    [DllImport("__Internal")]
    private static extern bool GetDeviceIsMobile();
}