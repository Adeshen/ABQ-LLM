# Copyright (c) 2019-2023, NVIDIA CORPORATION.  All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

cmake_minimum_required(VERSION 3.8)

set(decoder_masked_groupedquery_attention_files
    decoder_masked_groupedquery_attention.cu
)

if (NOT MSVC)
endif()

file(GLOB decoder_masked_groupedquery_attention_files ${decoder_masked_groupedquery_attention_files} ./decoder_masked_groupedquery_attention/*.cu)
add_library(decoder_masked_groupedquery_attention STATIC ${decoder_masked_groupedquery_attention_files})
set_property(TARGET decoder_masked_groupedquery_attention PROPERTY POSITION_INDEPENDENT_CODE  ON)
set_property(TARGET decoder_masked_groupedquery_attention PROPERTY CUDA_RESOLVE_DEVICE_SYMBOLS  ON)

if (NOT MSVC)
    add_subdirectory(flash_attention2)
    add_subdirectory(fmha)
    target_link_libraries(decoder_masked_groupedquery_attention PUBLIC flash_attention2 llama_fmha)
endif()
