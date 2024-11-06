// Эти директивы используются для защиты от многократного включения файла. Если файл уже был включен, следующий код не будет повторно включен.
#ifndef _MV3D_LP_API_H_
#define _MV3D_LP_API_H_
// Включает заголовочный файл, который, содержит определения и типы данных, используемые в API. 
#include "Mv3dLpDefine.h"
// Проверяет, компилируется ли код с использованием компилятора C++. 
// Если это так, следует использовать extern "C" для предотвращения изменения имен функций (name mangling), что позволяет использовать API как из C, так и из C++.
#ifdef __cplusplus
extern "C" {
#endif

/************************************************************************
*  @~english
*  @brief  Get DLL version
*  @param  
*  @return Return version info.Eg:1.0.0
 ************************************************************************/
// Объявление функции MV3D_LP_GetVersion, которая возвращает указатель на строку (const char*). Это функция API, которая возвращает версию библиотеки.
MV3D_LP_API const char* MV3D_LP_GetVersion();

/************************************************************************
*  @~english
*  @brief  Initializes the DLL
*  @param
*  @return Success, return MV3D_LP_OK. Failure, return error code
************************************************************************/
// Инициализирует среду SDK. Возвращает статус выполнения
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_Initialize();

/************************************************************************
*  @~english
*  @brief  Finalize DLL
*  @param
*  @return Success, return MV3D_LP_OK. Failure, return error code
************************************************************************/
// Объявление функции, которая завершает работу библиотеки и также возвращает статус выполнения.
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_Finalize();

/************************************************************************
*  @~english
*  @brief  Gets the number of devices in the current environment
*  @param  pDeviceNumber               [OUT]           device number
*  @return Success, return MV3D_LP_OK. Failure, return error code
************************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_GetDeviceNumber(uint32_t* pDeviceNumber);

/************************************************************************
*  @~english
*  @brief  Gets 3D cameras list
*  @param  pstDeviceInfos              [IN OUT]        devices list
*  @param  nMaxDeviceCount             [IN]            Max Number of device list caches
*  @param  pDeviceCount                [OUT]           number of devices in the fill list
*  @return Success, return MV3D_LP_OK. Failure, return error code
************************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_GetDeviceList(MV3D_LP_DEVICE_INFO* pstDeviceInfos, uint32_t nMaxDeviceCount, uint32_t* pDeviceCount);

/************************************************************************
*  @~english
*  @brief  Open device by ip
*  @param  handle                      [IN OUT]        device handle
*  @param  chIP                        [IN]            IP
*  @return Success, return MV3D_LP_OK. Failure, return error code
************************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_OpenDeviceByIP(HANDLE *handle, const char* chIP);

/************************************************************************
*  @~english
*  @brief  Open device by serial number
*  @param  handle                      [IN OUT]        device handle
*  @param  chSN                        [IN]            serial number
*  @return Success, return MV3D_LP_OK. Failure, return error code
************************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_OpenDeviceBySN(HANDLE *handle, const char* chSN);

/************************************************************************
*  @~english
*  @brief  Close device
*  @param  handle                      [IN]            device handle
*  @return Success, return MV3D_LP_OK. Failure, return error code
************************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_CloseDevice(HANDLE *handle);

/************************************************************************
*  @~english
*  @brief  IP configuration，only network device is valid 
*  @param  chSerialNumber              [IN]            serial number
*  @param  pstIPConfig                 [IN]            IP Config, Static IP，DHCP
*  @return Success, return MV3D_LP_OK. Failure, return error code
************************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_SetIpConfig(const char* chSerialNumber, MV3D_LP_IP_CONFIG* pstIPConfig);

/************************************************************************
*  @~english
*  @brief  Register Exception Message CallBack
*  @param  handle                      [IN]            device handle
*  @param  cbException                 [IN]            Exception Message CallBack Function Pointer
*  @param  pUser                       [IN]            User defined variable
*  @return Success, return MV3D_LP_OK. Failure, return error code
************************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_RegisterExceptionCallBack(HANDLE handle, MV3D_LP_ExceptionCallBack cbException, void* pUser);

/***********************************************************************
*  @~english
*  @brief  Start measurements
*  @param  handle                      [IN]            device handle
*  @return Success, return MV3D_LP_OK. Failure, return error code
***********************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_StartMeasure(HANDLE handle);

/***********************************************************************
*  @~english
*  @brief  Stop measurements
*  @param  handle                      [IN]            device handle
*  @return Success, return MV3D_LP_OK. Failure, return error code
***********************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_StopMeasure(HANDLE handle);

/************************************************************************
*  @~english
*  @brief  Execute device software trigger
*  @param  handle                      [IN]            device handle
*  @return Success, return MV3D_LP_OK. Failure, return error code
************************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_SoftTrigger(HANDLE handle);

/************************************************************************
*  @~english
*  @brief  Get image data
*  @param  handle                      [IN]            device handle
*  @param  pstImageData                [IN OUT]        data set pointer
*  @param  nTimeout                    [IN]            timevalue（Unit: ms）
*  @return Success, return MV3D_LP_OK. Failure, return error code
************************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_GetImage(HANDLE handle, MV3D_LP_IMAGE_DATA* pstImageData, uint32_t nTimeout);

/***********************************************************************
*  @~english
*  @brief  register image data callback
*  @param  handle                      [IN]            device handle
*  @param  cbOutput                    [IN]            Callback function pointer
*  @param  pUser                       [IN]            User defined variable
*  @return Success, return MV3D_LP_OK. Failure, return error code
***********************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_RegisterImageDataCallBack(HANDLE handle, MV3D_LP_ImageDataCallBack cbOutput, void* pUser);

/***********************************************************************
*  @~english
*  @brief  Clear data buffer
*  @param  handle                      [IN]            device handle
*  @return Success, return MV3D_LP_OK. Failure, return error code
***********************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_ClearDataBuffer(HANDLE handle);

/************************************************************************
*  @~english
*  @brief  Get device param value
*  @param  handle                      [IN]            device handle
*  @param  strKey                      [IN]            Key value
*  @param  pstParam                    [IN OUT]        Structure pointer of device param
*  @return Success, return MV3D_LP_OK. Failure, return error code
************************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_GetParam(HANDLE handle, const char* strKey, MV3D_LP_PARAM* pstParam);

/************************************************************************
*  @~english
*  @brief  Set device param value
*  @param  handle                      [IN]            device handle
*  @param  strKey                      [IN]            Key value
*  @param  pstParam                    [IN]            Structure pointer of device param
*  @return Success, return MV3D_LP_OK. Failure, return error code
************************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_SetParam(HANDLE handle, const char* strKey, MV3D_LP_PARAM* pstParam);

/************************************************************************
*  @~english
*  @brief  Execute device command
*  @param  handle                      [IN]            device handle
*  @param  strKey                      [IN]            Key value
*  @return Success, return MV3D_LP_OK. Failure, return error code
************************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_Execute(HANDLE handle, const char* strKey);


/************************************************************************
*  @~english
*  @brief  Discard API
************************************************************************/
#if 1
/************************************************************************
*  @~english
*  @brief  Get device ip
*  @param  nDeviceIndex                [IN]            device index
*  @param  chIP                        [IN OUT]        devices IP
*  @return Success, return MV3D_LP_OK. Failure, return error code
************************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_GetDeviceIP(uint32_t nDeviceIndex, char* chIP);

/************************************************************************
*  @~english
*  @brief  Get device ip
*  @param  nDeviceIndex                [IN]            device index
*  @param  chSN                        [IN OUT]        devices serial number
*  @return Success, return MV3D_LP_OK. Failure, return error code
************************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_GetDeviceSN(uint32_t nDeviceIndex, char* chSN);

/************************************************************************
*  @~english
*  @brief  Get profile data
*  @param  handle                      [IN]            device handle
*  @param  nProfileCount               [IN]            the number of profile to get
*  @param  pstProfileData              [IN OUT]        data set pointer
*  @param  nTimeout                    [IN]            timevalue（Unit: ms）
*  @return Success, return MV3D_LP_OK. Failure, return error code
************************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_GetProfile(HANDLE handle, uint32_t nProfileCount, MV3D_LP_PROFILE_DATA* pstProfileData, uint32_t nTimeout);

/************************************************************************
*  @~english
*  @brief  Get batch profile data
*  @param  handle                      [IN]            device handle
*  @param  pstDepthData                [IN OUT]        data set pointer
*  @param  nTimeout                    [IN]            timevalue（Unit: ms）
*  @return Success, return MV3D_LP_OK. Failure, return error code
************************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_GetBatchProfile(HANDLE handle, MV3D_LP_DEPTH_DATA* pstDepthData, uint32_t nTimeout);

/************************************************************************
*  @~english
*  @brief  Get intensity data
*  @param  handle                      [IN]            device handle
*  @param  pstIntensityData            [IN OUT]        data set pointer
*  @param  nTimeout                    [IN]            timevalue（Unit: ms）
*  @return Success, return MV3D_LP_OK. Failure, return error code
************************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_GetIntensityData(HANDLE handle, MV3D_LP_INTENSITY_DATA* pstIntensityData, uint32_t nTimeout);

/***********************************************************************
*  @~english
*  @brief  register image data callback
*  @param  handle                      [IN]            device handle
*  @param  cbOutput                    [IN]            Callback function pointer
*  @param  nProfileCount               [IN]            the frequency to call the callback function
*  @param  pUser                       [IN]            User defined variable
*  @return Success, return MV3D_LP_OK. Failure, return error code
***********************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_RegisterProfileCallBack(HANDLE handle, MV3D_LP_ProfileDataCallBack cbOutput, uint32_t nProfileCount, void* pUser);

/***********************************************************************
*  @~english
*  @brief  register image data callback
*  @param  handle                      [IN]            device handle
*  @param  cbOutput                    [IN]            Callback function pointer
*  @param  pUser                       [IN]            User defined variable
*  @return Success, return MV3D_LP_OK. Failure, return error code
***********************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_RegisterBatchProfileCallBack(HANDLE handle, MV3D_LP_BatchProfileDataCallBack cbOutput, void* pUser);
#endif

#ifdef __cplusplus
}
#endif

#endif // _MV3D_LP_API_H_
