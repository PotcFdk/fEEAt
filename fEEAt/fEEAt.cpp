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

#include <fEEAt.hpp>

int fEEAt::gcd(int x, int y)
{
    int t;

    while (y)
    {
        t = x;
        x = y;
        y = t % y;
    }

    return x;
}

void r_eea (int x, int y, int * d, int * s, int * t)
{
    if (!y)
    {
        *d = x;
        *s = 1;
        *t = 0;
        return;
    }

    r_eea(y, x % y, d, s, t);

    int fl = reinterpret_cast<int>(x/y) * (*t);
    int os = *s;
    *s = *t;
    *t = os - fl;
    return;
}

fEEAt::EEAResult * fEEAt::eea (int x, int y)
{
    int d, s, t;
    r_eea(x, y, &d, &s, &t);
    EEAResult * result = new EEAResult();
    result->gcd = d;
    result->s = s;
    result->t = t;
    return result;
}
