// Заголовочный файл для API библиотеки, связанной с обработкой изображений в 3D.
// Эти директивы используются для защиты от многократного включения файла.
#ifndef _MV3D_LP_IMG_PROC_H_
#define _MV3D_LP_IMG_PROC_H_
// Включает заголовочный файл, который, содержит определения, типы данных и константы, используемые в API, такие как статусы и типы данных для изображений.
#include "Mv3dLpDefine.h"
// Проверяет, компилируется ли код с использованием компилятора C++. 
// Если это так, следует использовать extern "C" для предотвращения изменения имен функций (name mangling), что позволяет использовать API как из C, так и из C++.
#ifdef __cplusplus
extern "C" {
#endif

/************************************************************************
*  @~english
*  @brief  depth image convert to pointcloud image
*  @param  pstDepthImageData        [IN]          Depth  data
*  @param  pstPointCloudData        [IN OUT]      Point Cloud data
*  @return Success, return MV3D_LP_OK. Failure,return error code
************************************************************************/
// Принимает указатели на данные изображений глубины и облака точек, возвращая статус выполнения.
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_MapDepthToPointCloud(MV3D_LP_IMAGE_DATA* pstDepthImageData, MV3D_LP_IMAGE_DATA* pstPointCloudData);

/************************************************************************
*  @~english
*  @brief  depth image convert to pointcloud image for round, change configuraiton in ini.
*  @param  pstDepthDataList         [IN]          input range image list
*  @param  nImageCount              [IN]          input range image count,up to 8
*  @param  pstPointCloudData        [IN OUT]      point cloud data，multi devices point cloud collection 
*  @return Success, return MV3D_LP_OK. Failure,return error code
************************************************************************/
// Функция принимает список изображений глубины и количество этих изображений (до 8).
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_MapDepthToPointCloudRound(MV3D_LP_IMAGE_DATA* pstDepthDataList, uint32_t nImageCount, MV3D_LP_IMAGE_DATA* pstPointCloudData);

/************************************************************************
*  @~english
*  @brief  image convert, support depth convert to mono8 or color(change configuraiton in ini), need to specify the enImageType for out image data
*  @param  pstInImageData           [IN]          in image data
*  @param  pstOutImageData          [IN OUT]      out image data
*  @return Success, return MV3D_LP_OK. Failure,return error code
************************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_ImageConvert(MV3D_LP_IMAGE_DATA* pstInImageData, MV3D_LP_IMAGE_DATA* pstOutImageData);

/************************************************************************
*  @~english
*  @brief  Depth Image mosaic,support single Device or multi devices, change configuraiton in ini.
*  @param  pstDepthDataList         [IN]          input range image list
*  @param  nImageCount              [IN]          input range image count,up to 8
*  @param  pstDepthData             [OUT]         out depth image
*  @return Success, return MV3D_LP_OK. Failure,  return error code
************************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_DepthMosaic(MV3D_LP_IMAGE_DATA* pstDepthDataList, uint32_t nImageCount, MV3D_LP_IMAGE_DATA* pstDepthData);

/************************************************************************
*  @~english
*  @brief  save image to file
*  @brief  FileType_BMP  support ImageType_Mono8/ImageType_Depth/ImageType_RGB24_Packed
*  @brief  FileType_JPG  support ImageType_Depth/ImageType_Jpeg/ImageType_RGB24_Packed
*  @brief  FileType_TIFF support ImageType_Depth/ImageType_RGB24_Packed
*  @brief  FileType_TIFF_U16/FileType_TIFF_F32      support ImageType_Depth
*  @brief  FileType_PLY/FileType_CSV/FileType_OBJ   support ImageType_Profile/ImageType_Profile_ABC32/ImageType_PointCloud
*  @brief  FileType_PLY_BINARY/FileType_PLY_TEXTURE support ImageType_PointCloud
*  @param  pstImage                 [IN]            image data 
*  @param  enFileType               [IN]            file type
*  @param  chFileName               [IN]            file name
*  @return Success, return MV3D_LP_OK. Failure, return error code
************************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_SaveImage(MV3D_LP_IMAGE_DATA* pstImage, Mv3dLpFileType enFileType, const char* chFileName);

/************************************************************************
*  @~english
*  @brief  display image api
*  @brief  support ImageType_Mono8/ImageType_Depth/ImageType_RGB24_Packed，Mono8 is not support manual display
*  @brief  support ImageType_Profile/ImageType_Profile_ABC32/ImageType_PointCloud
*  @param  pstImage                 [IN]             image data 
*  @param  hWnd                     [IN]             windows handle
*  @param  enDisplayType            [IN]             display type
*  @param  nMin                     [IN]             depth  threshod nMin,threshold exceeded processing, effective in Mode DisplayType_Manual
*  @param  nMax                     [IN]             depth  threshod nMax,threshold exceeded processing, effective in Mode DisplayType_Manual
*  @return Success, return MV3D_LP_OK. Failure, return error code
************************************************************************/
MV3D_LP_API MV3D_LP_STATUS MV3D_LP_DisplayImage(MV3D_LP_IMAGE_DATA* pstImage, void * hWnd, Mv3dLpDisplayType enDisplayType, int32_t nMin, int32_t nMax);

#ifdef __cplusplus
}
#endif

#endif