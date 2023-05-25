/* Copyright 2021 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_LITE_MICRO_KERNELS_HEXAGON_HEXAGON_FULLY_CONNECTED_H_
#define TENSORFLOW_LITE_MICRO_KERNELS_HEXAGON_HEXAGON_FULLY_CONNECTED_H_

#include "tensorflow/lite/c/builtin_op_data.h"
#include "tensorflow/lite/micro/micro_common.h"
#include "tensorflow/lite/kernels/internal/types.h"
#include "tensorflow/lite/micro/kernels/fully_connected.h"

namespace tflite {

struct HexagonOpDataFullyConnected {
  struct OpDataFullyConnected reference_op_data;
  void* hexagon_data;
};

void* HexagonFullyConnectedInit(TfLiteContext* context, const char* buffer,
                                size_t length);
TfLiteStatus HexagonFullyConnectedPrepare(TfLiteContext* context,
                                          TfLiteNode* node);
TfLiteStatus HexagonFullyConnectedEvalInt8(TfLiteContext* context,
                                           TfLiteNode* node);

}  // namespace tflite

#endif  // TENSORFLOW_LITE_MICRO_KERNELS_HEXAGON_HEXAGON_FULLY_CONNECTED_H_
