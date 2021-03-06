/**
Copyright 2014 PotcFdk

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
**/

#ifndef FEEAT_H
#define FEEAT_H

#include <stdint.h>

namespace fEEAt
{
    struct EEAResult
    {
        int64_t gcd, s, t, num, mod;
    };

    int64_t gcd (int64_t x, int64_t y);
    EEAResult * eea (int64_t x, int64_t y);
}

#endif
