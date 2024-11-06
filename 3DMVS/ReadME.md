Описываем вызовы API для получения изображения в шаблонном выполнений

1. Call MV3D_LP_Initialize() to initialize SDK environment. 
2. Call MV3D_LP_GetDeviceNumber() and MV3D_LP_GetDeviceList() to get the device list and number of devices. 
3. Call MV3D_LP_OpenDeviceBySN() to connect device by serial No., or call MV3D_LP_OpenDeviceByIp() to connect device by IP. 
4. (Optional) Call MV3D_LP_GetParam() and MV3D_LP_SetParam() to get and set parameters respectively. 
5. Call MV3D_LP_RegisterExceptionCallBack() to register exception message callback. 
6. Call MV3D_LP_StartMeasure() to start measurements. 
7. Call MV3D_LP_GetImage() to get data via polling. 
8. Call MV3D_LP_StopMeasure() to stop measurements. 
9. Call MV3D_LP_CloseDevice() to disconnect device. 
10. Call MV3D_LP_Finalize() to release SDK environment. 