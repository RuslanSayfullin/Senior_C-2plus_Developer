// Эти директивы используются для защиты от многократного включения файла. 
// Если файл уже был включен, следующий код не будет повторно включен.
#ifndef _MV3D_LP_DEFINE_H_
#define _MV3D_LP_DEFINE_H_
// Проверяет, не определен ли уже макрос MV3D_LP_API. Если не определен, выполняется следующий блок кода.
#ifndef MV3D_LP_API
    #if (defined (_WIN32) || defined(WIN64))
        // Проверяет, компилируется ли код в среде Windows. Если да, выполняется следующий блок кода.
        #if defined(MV3D_LP_EXPORTS)
            // Проверяет, определен ли макрос MV3D_LP_EXPORTS. 
            //Если он определен, это означает, что данный код компилируется как библиотека, и мы определяем MV3D_LP_API как __declspec(dllexport), что позволяет экспортировать функции из DLL.
            #define MV3D_LP_API __declspec(dllexport)
        #else
            // Если MV3D_LP_EXPORTS не определен, значит, код компилируется как клиент, использующий библиотеку. 
            // В этом случае MV3D_LP_API определяется как __declspec(dllimport), что позволяет импортировать функции из DLL.
            #define MV3D_LP_API __declspec(dllimport)
        #endif
    #else
        #ifndef __stdcall
            // Проверяет, не определен ли уже макрос __stdcall. 
            // Если не определен, он определяет его как пустой макрос. 
            // Это делается для обеспечения совместимости с компиляторами, которые могут не поддерживать соглашения о вызовах.
            #define __stdcall
        #endif

        #ifndef MV3D_LP_API
            // Если макрос MV3D_LP_API еще не определен (что должно быть так, если мы не в Windows), то он определяет его как пустой, что делает его неэффективным.
            #define  MV3D_LP_API
        #endif
    #endif
#endif

///< \~english Cross Platform Definition
#ifdef WIN32
    // Проверяет, компилируется ли код в среде Windows.
    // Определяет типы данных с фиксированной шириной для различных целых значений (8, 16, 32 и 64 бит). 
    // Это делается для обеспечения совместимости и предсказуемости типов данных на разных платформах.
    typedef signed char                   int8_t;
    typedef unsigned char                 uint8_t;
    typedef short                         int16_t;
    typedef unsigned short                uint16_t;
    typedef int                           int32_t;
    typedef unsigned int                  uint32_t;
    typedef long long int                 int64_t;
    typedef unsigned long long            uint64_t;
    // : Определяет макрос MV3D_LP_UNDEFINED как 0xFFFFFFFF, что может использоваться для обозначения неопределенного значения для целых чисел в Windows.
    #define MV3D_LP_UNDEFINED             0xFFFFFFFF
#else
    //  Включает стандартный заголовочный файл, который предоставляет фиксированные по размеру типы целых чисел, такие как int8_t, uint8_t, и т.д.
    #include <stdint.h>
    // Определяет макрос MV3D_LP_UNDEFINED как -1 для платформ, отличных от Windows, что также может использоваться для обозначения неопределенного значения.
    #define MV3D_LP_UNDEFINED             -1
#endif

/*********************************** en: Status Code******************************************/
///< \~english Definition of Correct Code
#define MV3D_LP_OK                        0x00000000              ///< \~english Success, no error

///< \~english Definition of General Error Code:from 0x80060000 to 0x800600FF
#define MV3D_LP_E_HANDLE                  0x80060000              ///< \~english Incorrect or invalid handle
#define MV3D_LP_E_SUPPORT                 0x80060001              ///< \~english The function is not supported
#define MV3D_LP_E_BUFOVER                 0x80060002              ///< \~english The buffer is full
#define MV3D_LP_E_CALLORDER               0x80060003              ///< \~english Incorrect calling sequence
#define MV3D_LP_E_PARAMETER               0x80060004              ///< \~english Incorrect parameter
#define MV3D_LP_E_RESOURCE                0x80060005              ///< \~english Resource request failed
#define MV3D_LP_E_NODATA                  0x80060006              ///< \~english No data
#define MV3D_LP_E_PRECONDITION            0x80060007              ///< \~english Incorrect precondition, or running environment has changed
#define MV3D_LP_E_VERSION                 0x80060008              ///< \~english The version mismatched
#define MV3D_LP_E_NOENOUGH_BUF            0x80060009              ///< \~english Insufficient memory
#define MV3D_LP_E_ABNORMAL_IMAGE          0x8006000A              ///< \~english Abnormal image. Incomplete image caused by packet loss
#define MV3D_LP_E_LOAD_LIBRARY            0x8006000B              ///< \~english Failed to load the dynamic link library dynamically
#define MV3D_LP_E_ALGORITHM               0x8006000C              ///< \~english Algorithm error
#define MV3D_LP_E_DEVICE_OFFLINE          0x8006000D              ///< \~english The device is offline 
#define MV3D_LP_E_ACCESS_DENIED           0x8006000E              ///< \~english No device access permission
#define MV3D_LP_E_OUTOFRANGE              0x8006000F              ///< \~english The value is out of range

#define MV3D_LP_E_UNKNOW                  0x800600FF              ///< \~english Unknown error

/************************************ en: Macro Definition************************************/
#define MV3D_LP_MAX_STRING_LENGTH         256                     ///< \~english The maximum length of string
#define MV3D_LP_MAX_ENUM_COUNT            16                      ///< \~english The maximum number of enumerations

/************************************ en: Pixel Type******************************************/
#define MV3D_LP_PIXEL_MONO                0x01000000              
#define MV3D_LP_PIXEL_COLOR               0x02000000              
#define MV3D_LP_PIXEL_CUSTOM              0x80000000              
#define MV3D_LP_PIXEL_BIT_COUNT(n)        ((n) << 16)             

///< \~english Attribute Key Value Definition
#define MV3D_LP_INT_WIDTH                 "Width"                 ///< \~english Image width
#define MV3D_LP_INT_HEIGHT                "Height"                ///< \~english Image height
#define MV3D_LP_ENUM_PIXELFORMAT          "PixelFormat"           ///< \~english Pixel format
#define MV3D_LP_ENUM_IMAGEMODE            "ImageMode"             ///< \~english Image mode
#define MV3D_LP_FLOAT_GAIN                "Gain"                  ///< \~english Gain
#define MV3D_LP_FLOAT_EXPOSURETIME        "ExposureTime"          ///< \~english Exposure time
#define MV3D_LP_FLOAT_FRAMERATE           "AcquisitionFrameRate"  ///< \~english Acquired frame rate
#define MV3D_LP_ENUM_TRIGGERSELECTOR      "TriggerSelector"       ///< \~english Trigger selector
#define MV3D_LP_ENUM_TRIGGERMODE          "TriggerMode"           ///< \~english Trigger mode
#define MV3D_LP_ENUM_TRIGGERSOURCE        "TriggerSource"         ///< \~english Trigger source
#define MV3D_LP_FLOAT_TRIGGERDELAY        "TriggerDelay"          ///< \~english Trigger delay
#define MV3D_LP_INT_LSL_COORDINATE_TYPE   "SDKCoordinateType"     ///< \~english Line laser coordinate type
#define MV3D_LP_INT_LSL_EMPTY_POINT       "SDKEmptyPoint"         ///< \~english Line laser empty point


typedef int32_t                           MV3D_LP_STATUS;         ///< \~english Return value type
typedef void*                             HANDLE;                 ///< \~english Handle type
typedef int32_t                           BOOL;                   ///< \~english Boolean type

#ifndef TRUE
#define TRUE                              1                       
#endif
#ifndef FALSE
#define FALSE                             0                       
#endif
#ifndef NULL
#define NULL                              0                       
#endif

/******************* en: Enumeration***************************/

///< \~english IP Address Mode
typedef enum Mv3dLpIpCfgMode
{
    IpCfgMode_Static            = 1,                                        ///< \~english Static IP mode
    IpCfgMode_DHCP              = 2,                                        ///< \~english Automatically assigned IP address (DHCP)
    IpCfgMode_LLA               = 4                                         ///< \~english Automatically assigned IP address (LLA) 
} Mv3dLpIpCfgMode;

///< \~english Exception Type
typedef enum Mv3dLpDevExceptionType
{
    DevExceptionType_Undefined  = MV3D_LP_UNDEFINED,
    DevExceptionType_Disconnect = 1                                         ///< \~english The device is disconnected
} Mv3dLpDevExceptionType;

///< \~english Parameter Type
typedef enum Mv3dLpParamType
{
    ParamType_Undefined         = MV3D_LP_UNDEFINED,                        
    ParamType_Bool              = 1,                                        ///< \~english Boolean
    ParamType_Int               = 2,                                        ///< \~english Int
    ParamType_Float             = 3,                                        ///< \~english Float
    ParamType_Enum              = 4,                                        ///< \~english Enumeration
    ParamType_String            = 5                                         ///<  \~english String
} Mv3dLpParamType;

typedef enum Mv3dLpImageType
{
    ImageType_Undefined         = MV3D_LP_UNDEFINED,
    ImageType_Mono8             = (MV3D_LP_PIXEL_MONO  | MV3D_LP_PIXEL_BIT_COUNT(8)  | 0x0001),   //0x01080001,(Mono8)
    ImageType_Depth             = (MV3D_LP_PIXEL_MONO  | MV3D_LP_PIXEL_BIT_COUNT(16) | 0x00B8),   //0x011000B8,(C16)
    ImageType_Profile           = (MV3D_LP_PIXEL_COLOR | MV3D_LP_PIXEL_BIT_COUNT(48) | 0x00B9),   //0x023000B9,(ABC16)
    ImageType_PointCloud        = (MV3D_LP_PIXEL_COLOR | MV3D_LP_PIXEL_BIT_COUNT(96) | 0x00C0),   //0x026000C0,(ABC32f)
    ImageType_RGB24_Packed      = (MV3D_LP_PIXEL_COLOR | MV3D_LP_PIXEL_BIT_COUNT(24) | 0x0014),   //0x02180014,(RGB24)
    ImageType_Jpeg              = (MV3D_LP_PIXEL_CUSTOM| MV3D_LP_PIXEL_BIT_COUNT(24) | 0x0001),   //0x80180001,(JPEG)
    ImageType_Profile_ABC32     = (MV3D_LP_PIXEL_CUSTOM| MV3D_LP_PIXEL_COLOR | MV3D_LP_PIXEL_BIT_COUNT(96) | 0x3001),//0x82603001,(ABC32)
} Mv3dLpImageType;

///< \~english 3D File Type
typedef enum Mv3dLpFileType
{
    FileType_Undefined          = MV3D_LP_UNDEFINED,
    FileType_PLY                = 1,                                        ///< \~english PLY(ascii)
    FileType_CSV                = 2,                                        ///< \~english CSV
    FileType_OBJ                = 3,                                        ///< \~english OBJ
    FileType_BMP                = 4,                                        ///< \~english BMP
    FileType_JPG                = 5,                                        ///< \~english JPG
    FileType_TIFF               = 6,                                        ///< \~english TIFF(S16)
    FileType_TIFF_U16           = 7,                                        ///< \~english TIFF(U16)
    FileType_TIFF_F32           = 8,                                        ///< \~english TIFF(F32)
    FileType_PLY_BINARY         = 9,                                        ///< \~english PLY(binary)
    FileType_PLY_TEXTURE        = 10                                        ///< \~english PLY(texture)
}Mv3dLpFileType;

///< \~english 3D Image Display Type
typedef enum Mv3dLpDisplayType
{
    DisplayType_Undefined       = MV3D_LP_UNDEFINED,
    DisplayType_Auto            = 1,
    DisplayType_Manual          = 2,
}Mv3dLpDisplayType;

/******************* en: Struct***********************/

typedef struct _MV3D_LP_DEVICE_INFO_
{
    char                      chManufacturerName[32];                       ///< \~english Manufacturer
    char                      chModelName[32];                              ///< \~english Device model
    char                      chDeviceVersion[32];                          ///< \~english Device version
    char                      chManufacturerSpecificInfo[48];               ///< \~english The specific information about manufacturer
    char                      chSerialNumber[16];                           ///< \~english Device serial number
    char                      chUserDefinedName[16];                        ///< \~english User-defined name of device

    unsigned char             chMacAddress[8];                              ///< \~english MAC address
    Mv3dLpIpCfgMode           enIPCfgMode;                                  ///< \~english Current IP type
    char                      chCurrentIp[16];                              ///< \~english Device‘s IP address
    char                      chCurrentSubNetMask[16];                      ///< \~english Device’s subnet mask
    char                      chDefultGateWay[16];                          ///< \~english Device‘s default gateway
    char                      chNetExport[16];                              ///< \~english Network interface IP address

    uint32_t                  nDevTypeInfo;                                 ///< \~english Device type info

    uint8_t                   nReserved[12];                                ///< \~english Reserved

} MV3D_LP_DEVICE_INFO;

typedef struct _MV3D_LP_IP_CONFIG_
{
    Mv3dLpIpCfgMode           enIPCfgMode;                                  ///< \~english IP configuration mode
    char                      chDestIp[16];                                 ///< \~english The IP address which is to be attributed to the target device. It is valid in the static IP mode only
    char                      chDestNetMask[16];                            ///< \~english The subnet mask of target device. It is valid in the static IP mode only
    char                      chDestGateWay[16];                            ///< \~english The gateway of target device. It is valid in the static IP mode only

    uint8_t                   nReserved[16];                                ///< \~english Reserved
} MV3D_LP_IP_CONFIG;

///< \~chinese 图像数据         \~english Image Data
typedef struct _MV3D_LP_IMAGE_DATA_
{
    Mv3dLpImageType           enImageType;                                  ///< \~english Image type
    uint32_t                  nWidth;                                       ///< \~english Image width
    uint32_t                  nHeight;                                      ///< \~english Image height
    uint8_t*                  pData;                                        ///< \~english Image data, which is outputted by the camera
    uint32_t                  nDataLen;                                     ///< \~english Image data length (bytes)
    uint8_t*                  pIntensityData;                               ///< \~english Intensity image data, which is outputted by the camera
    uint32_t                  nIntensityDataLen;                            ///< \~english Intensity image data length (bytes)
    uint32_t                  nFrameNum;                                    ///< \~english Frame number, which indicates the frame sequence
    int64_t                   nTimeStamp;                                   ///< \~english Timestamp uploaded by the device. It starts from 0 when the device is powered on. Refer to the device user manual for detailed rules
    BOOL                      bValid;                                       ///< \~english Image valid flag,invalid if there is packet loss
    float                     fXScale;                                      ///< \~english X scale
    float                     fYScale;                                      ///< \~english Y scale
    float                     fZScale;                                      ///< \~english Z scale
    int32_t                   nXOffset;                                     ///< \~english X offset
    int32_t                   nYOffset;                                     ///< \~english Y offset
    int32_t                   nZOffset;                                     ///< \~english Z offset

    uint8_t                   nReserved[16];                                ///< \~english Reserved
} MV3D_LP_IMAGE_DATA;

///< \~english Int Type Value
typedef struct _MV3D_LP_INTPARAM_
{
    int64_t                   nCurValue;                                    ///< \~english Current value
    int64_t                   nMax;                                         ///< \~english The maximum value
    int64_t                   nMin;                                         ///< \~english The minimum value
    int64_t                   nInc;                                         ///< \~english The increment value
} MV3D_LP_INTPARAM;

///< \~english Enumeration Type Value
typedef struct _MV3D_LP_ENUMPARAM_
{
    uint32_t                  nCurValue;                                    ///< \~english Current value
    uint32_t                  nSupportedNum;                                ///< \~english The number of valid data
    uint32_t                  nSupportValue[MV3D_LP_MAX_ENUM_COUNT];        ///< \~english The type of supported enumerations
} MV3D_LP_ENUMPARAM;

///< \~english Float Type Value
typedef struct _MV3D_LP_FLOATPARAM_
{
    float                     fCurValue;                                    ///< \~english Current value
    float                     fMax;                                         ///< \~english The maximum value
    float                     fMin;                                         ///< \~english The minimum value
} MV3D_LP_FLOATPARAM;

///< \~english String Type Value
typedef struct _MV3D_LP_STRINGPARAM_
{
    char                      chCurValue[MV3D_LP_MAX_STRING_LENGTH];        ///< \~english Current value
    uint32_t                  nMaxLength;                                   ///< \~english The maximum length of string
} MV3D_LP_STRINGPARAM;

///< \~english Device Parameters
typedef struct _MV3D_LP_PARAM_
{
    Mv3dLpParamType           enParamType;                                  ///< \~english Parameter data type
    union
    {
        BOOL                  bBoolParam;                     
        MV3D_LP_INTPARAM      stIntParam;                     
        MV3D_LP_FLOATPARAM    stFloatParam;                   
        MV3D_LP_ENUMPARAM     stEnumParam;                    
        MV3D_LP_STRINGPARAM   stStringParam;                  
    } ParamInfo;

    uint8_t                   nReserved[16];                                ///< \~english Reserved
} MV3D_LP_PARAM;

///< \~english Exception Information
typedef struct _MV3D_LP_EXCEPTION_INFO_
{
    Mv3dLpDevExceptionType    enExceptionType;                              ///< \~english Exception type
    char                      chExceptionDesc[MV3D_LP_MAX_STRING_LENGTH];   ///< \~english Exception description

    uint8_t                   nReserved[4];                                 ///< \~english Reserved
} MV3D_LP_EXCEPTION_INFO;

///< \~english Callback Api
typedef void(__stdcall* MV3D_LP_ImageDataCallBack)         (MV3D_LP_IMAGE_DATA* pstImageData, void* pUser);
typedef void(__stdcall* MV3D_LP_ExceptionCallBack)         (MV3D_LP_EXCEPTION_INFO* pstExceptInfo, void* pUser);

/************************************************************************
*  @brief  Discard Data 
************************************************************************/
#if 1
///< \~english 3D Point（S16）
typedef struct _MV3D_LP_POINT_XYZ_S16_
{
    int16_t nX;
    int16_t nY;
    int16_t nZ;
}MVB3D_LP_POINT_XYZ_S16;

///< \~english 3D Point（F32）
typedef struct _MV3D_LP_POINT_XYZ_F32_
{
    float fX;
    float fY;
    float fZ;
}MVB3D_LP_POINT_XYZ_F32;

///< \~english Profile Data
typedef struct _MV3D_LP_PROFILE_DATA_
{
    uint32_t                  nLinePntNum;                                  ///< \~english Number of points on a single line
    uint32_t                  nProfileCnt;                                  ///< \~english Profile count
    MVB3D_LP_POINT_XYZ_S16*   pData;                                        ///< \~english Profile data
    uint32_t                  nDataLen;                                     ///< \~english Profile data length (bytes)
    uint32_t                  nFrameNum;                                    ///< \~english Frame number, which indicates the frame sequence
    int64_t                   nTimeStamp;                                   ///< \~english Timestamp uploaded by the device. It starts from 0 when the device is powered on. Refer to the device user manual for detailed rules
    BOOL                      bValid;                                       ///< \~english Image valid flag,invalid if there is packet loss
    float                     fXScale;                                      ///< \~english X scale
    float                     fYScale;                                      ///< \~english Y scale
    float                     fZScale;                                      ///< \~english Z scale
    int32_t                   nXOffset;                                     ///< \~english X offset
    int32_t                   nYOffset;                                     ///< \~english Y offset
    int32_t                   nZOffset;                                     ///< \~english Z offset

    uint8_t                   nReserved[16];                                ///< \~english Reserved
} MV3D_LP_PROFILE_DATA;

///< \~english Depht Data
typedef struct _MV3D_LP_DEPTH_DATA_
{
    uint32_t                  nWidth;                                       ///< \~english Image width
    uint32_t                  nHeight;                                      ///< \~english Image height
    int16_t*                  pData;                                        ///< \~english Depth data
    uint32_t                  nDataLen;                                     ///< \~english  Depth data length (bytes)
    uint32_t                  nFrameNum;                                    ///< \~english Frame number, which indicates the frame sequence
    int64_t                   nTimeStamp;                                   ///< \~english Timestamp uploaded by the device. It starts from 0 when the device is powered on. Refer to the device user manual for detailed rules
    BOOL                      bValid;                                       ///< \~english Image valid flag,invalid if there is packet loss
    float                     fXScale;                                      ///< \~english X scale
    float                     fYScale;                                      ///< \~english Y scale
    float                     fZScale;                                      ///< \~english Z scale
    int32_t                   nXOffset;                                     ///< \~english X offset
    int32_t                   nYOffset;                                     ///< \~english Y offset
    int32_t                   nZOffset;                                     ///< \~english Z offset

    uint8_t                   nReserved[16];                                ///< \~english Reserved
} MV3D_LP_DEPTH_DATA;

///< \~english Intensity Data
typedef struct _MV3D_LP_INTENSITY_DATA_
{
    uint32_t                  nWidth;                                       ///< \~english Image width
    uint32_t                  nHeight;                                      ///< \~english Image height
    uint8_t*                  pData;                                        ///< \~english Intensity data
    uint32_t                  nDataLen;                                     ///< \~english  Intensity data length (bytes)
    uint32_t                  nFrameNum;                                    ///< \~english Frame number, which indicates the frame sequence
    int64_t                   nTimeStamp;                                   ///< \~english Timestamp uploaded by the device. It starts from 0 when the device is powered on. Refer to the device user manual for detailed rules
    BOOL                      bValid;                                       ///< \~english Image valid flag,invalid if there is packet loss

    uint8_t                   nReserved[16];                                ///< \~english Reserved
} MV3D_LP_INTENSITY_DATA;

///< \~chinese 点云数据             \~english PointCloud Data
typedef struct _MV3D_LP_POINTCLOUD_DATA_
{    
    MVB3D_LP_POINT_XYZ_F32*   pData;                                        ///< \~english Pointcloud data
    uint32_t                  nDataLen;                                     ///< \~english  Pointcloud data length (bytes)
    uint32_t                  nFrameNum;                                    ///< \~english Frame number, which indicates the frame sequence
    int64_t                   nTimeStamp;                                   ///< \~english Timestamp uploaded by the device. It starts from 0 when the device is powered on. Refer to the device user manual for detailed rules
    BOOL                      bValid;                                       ///< \~english Image valid flag,invalid if there is packet loss

    uint8_t                   nReserved[16];                                ///< \~english Reserved
} MV3D_LP_POINTCLOUD_DATA;

///< \~english Callback Api
typedef void(__stdcall* MV3D_LP_ProfileDataCallBack)       (MV3D_LP_PROFILE_DATA* pstProfileData, MV3D_LP_INTENSITY_DATA* pstIntensityData, void* pUser);
typedef void(__stdcall* MV3D_LP_BatchProfileDataCallBack)  (MV3D_LP_DEPTH_DATA* pstDepthData, MV3D_LP_INTENSITY_DATA* pstIntensityData, void* pUser);

#endif

#endif  //  _MV3D_LP_DEFINE_H_
