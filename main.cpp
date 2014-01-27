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

#define VERSION "v0.1.2"
#define BUILD "2014/01/27"

#include <iostream>
#include <fEEAt.hpp>

using namespace std;
using namespace fEEAt;

int main()
{
    cout << "fEEAt.  " << VERSION << "  Build: " << BUILD << "  (c) PotcFdk, 2014" << endl
         << "======" << endl << endl;

    int64_t a, b;

    while (true)
    {
        cout << "> a = ";
        cin >> a;
        cout << "> b = ";
        cin >> b;

        EEAResult * result = eea(a, b);

        cout << endl
             << " gcd = " << result->gcd << endl
             << " s   = " << result->s;

        if (result->gcd == 1)
            cout << " (= " << a << "^-1 mod " << b << ")";

        cout << endl
             << " t   = " << result->t << endl
             ///
             << endl << ' ' << result->s << " * " << a
             << " + " << result->t << " * " << b
             << " = " << result->gcd << endl << endl;
    }

    return 0;
}
