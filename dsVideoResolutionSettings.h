/*
 * If not stated otherwise in this file or this component's Licenses.txt file the
 * following copyright and licenses apply:
 *
 * Copyright 2017 RDK Management
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
*/

#ifndef _DS_VIDEORESOLUTIONSETTINGS_H_
#define _DS_VIDEORESOLUTIONSETTINGS_H_

#include "dsTypes.h"

#ifdef __cplusplus
extern "C" {
namespace {
#endif


#define  _INTERLACED true
#define _PROGRESSIVE false

#define dsVideoPortRESOLUTION_NUMMAX 32

/* List all supported resolutions here */
typedef struct __hdmiSupportedRes_t {
    int mode;
    dsVideoPortResolution_t sRes;
}hdmiSupportedRes_t;

static hdmiSupportedRes_t kResolutions[] = {
                {3, {                                            "480p",
                        /*.pixelResolution = */                 dsVIDEO_PIXELRES_720x480,
                        /*.aspectRatio = */                             dsVIDEO_ASPECT_RATIO_16x9,
                        /*.stereoscopicMode = */                dsVIDEO_SSMODE_2D,
                        /*.frameRate = */                               dsVIDEO_FRAMERATE_60,
                        /*.interlaced = */                              _PROGRESSIVE,
                    }
                },
                {18, {                                            "576p50",
                        /*.pixelResolution = */                 dsVIDEO_PIXELRES_720x576,
                        /*.aspectRatio = */                             dsVIDEO_ASPECT_RATIO_16x9,
                        /*.stereoscopicMode = */                dsVIDEO_SSMODE_2D,
                        /*.frameRate = */                               dsVIDEO_FRAMERATE_50,
                        /*.interlaced = */                              _PROGRESSIVE,
                    }
                },
                {4, {                                            "720p",
                        /*.pixelResolution = */                 dsVIDEO_PIXELRES_1280x720,
                        /*.aspectRatio = */                             dsVIDEO_ASPECT_RATIO_16x9,
                        /*.stereoscopicMode = */                dsVIDEO_SSMODE_2D,
                        /*.frameRate = */                               dsVIDEO_FRAMERATE_60,
                        /*.interlaced = */                              _PROGRESSIVE,
                    }
                },
                {19, {                                            "720p50",
                        /*.pixelResolution = */                 dsVIDEO_PIXELRES_1280x720,
                        /*.aspectRatio = */                             dsVIDEO_ASPECT_RATIO_16x9,
                        /*.stereoscopicMode = */                dsVIDEO_SSMODE_2D,
                        /*.frameRate = */                               dsVIDEO_FRAMERATE_50,
                        /*.interlaced = */                              _PROGRESSIVE,
                    }
                },
                {5, {                                            "1080i",
                        /*.pixelResolution = */                 dsVIDEO_PIXELRES_1920x1080,
                        /*.aspectRatio = */                             dsVIDEO_ASPECT_RATIO_16x9,
                        /*.stereoscopicMode = */                dsVIDEO_SSMODE_2D,
                        /*.frameRate = */                               dsVIDEO_FRAMERATE_60,
                        /*.interlaced = */                              _INTERLACED,
                    }
                },
                {16, {                                            "1080p",
                        /*.pixelResolution = */                 dsVIDEO_PIXELRES_1920x1080,
                        /*.aspectRatio = */                             dsVIDEO_ASPECT_RATIO_16x9,
                        /*.stereoscopicMode = */                dsVIDEO_SSMODE_2D,
                        /*.frameRate = */                               dsVIDEO_FRAMERATE_60,
                        /*.interlaced = */                              _PROGRESSIVE,
                    }
                },
                {20, {                                            "1080i50",
                        /*.pixelResolution = */                 dsVIDEO_PIXELRES_1920x1080,
                        /*.aspectRatio = */                             dsVIDEO_ASPECT_RATIO_16x9,
                        /*.stereoscopicMode = */                dsVIDEO_SSMODE_2D,
                        /*.frameRate = */                               dsVIDEO_FRAMERATE_50,
                        /*.interlaced = */                              _INTERLACED,
                    }
                },
                {31, {                                            "1080p50",
                        /*.pixelResolution = */                 dsVIDEO_PIXELRES_1920x1080,
                        /*.aspectRatio = */                             dsVIDEO_ASPECT_RATIO_16x9,
                        /*.stereoscopicMode = */                dsVIDEO_SSMODE_2D,
                        /*.frameRate = */                               dsVIDEO_FRAMERATE_50,
                        /*.interlaced = */                              _PROGRESSIVE,
                    }
                },
                {32, {                                            "1080p24",
                        /*.pixelResolution = */                 dsVIDEO_PIXELRES_1920x1080,
                        /*.aspectRatio = */                             dsVIDEO_ASPECT_RATIO_16x9,
                        /*.stereoscopicMode = */                dsVIDEO_SSMODE_2D,
                        /*.frameRate = */                               dsVIDEO_FRAMERATE_24,
                        /*.interlaced = */                              _PROGRESSIVE,
                    }
                },
                {33, {                                            "1080p25",
                        /*.pixelResolution = */                 dsVIDEO_PIXELRES_1920x1080,
                        /*.aspectRatio = */                             dsVIDEO_ASPECT_RATIO_16x9,
                        /*.stereoscopicMode = */                dsVIDEO_SSMODE_2D,
                        /*.frameRate = */                               dsVIDEO_FRAMERATE_25,
                        /*.interlaced = */                              _PROGRESSIVE,
                    }
                },
                {34, {                                            "1080p30",
                        /*.pixelResolution = */                 dsVIDEO_PIXELRES_1920x1080,
                        /*.aspectRatio = */                             dsVIDEO_ASPECT_RATIO_16x9,
                        /*.stereoscopicMode = */                dsVIDEO_SSMODE_2D,
                        /*.frameRate = */                               dsVIDEO_FRAMERATE_30,
                        /*.interlaced = */                              _PROGRESSIVE,
                    }
                }
};
static const int kDefaultResIndex = 5; //Pick one resolution from kResolutions[] as default

#ifdef __cplusplus
}
}
#endif

#endif /* VIDEORESOLUTIONSETTINGS_H_ */