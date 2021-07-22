# Copyright 2021 Romain Margheriti
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

cmake_minimum_required(VERSION 3.20)

project(Unit-tests VERSION 1.0)

add_executable(Unit-tests main-test.c queue-test.c)

configure_file(configuration.h.in configuration.h)

target_include_directories(Unit-tests PUBLIC "${PROJECT_BINARY_DIR}")