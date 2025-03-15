# dmdisablewarning

Copyright (c) 2013-2018 brinkqiang (brink.qiang@gmail.com)

[![dmdisablewarning](https://img.shields.io/badge/brinkqiang-dmdisablewarning-blue.svg?style=flat-square)](https://github.com/brinkqiang/dmdisablewarning)
[![License](https://img.shields.io/badge/license-MIT-brightgreen.svg)](https://github.com/brinkqiang/dmdisablewarning/blob/master/LICENSE)
[![blog](https://img.shields.io/badge/Author-Blog-7AD6FD.svg)](https://brinkqiang.github.io/)
[![Open Source Love](https://badges.frapsoft.com/os/v3/open-source.png)](https://github.com/brinkqiang)
[![GitHub stars](https://img.shields.io/github/stars/brinkqiang/dmdisablewarning.svg?label=Stars)](https://github.com/brinkqiang/dmdisablewarning) 
[![GitHub forks](https://img.shields.io/github/forks/brinkqiang/dmdisablewarning.svg?label=Fork)](https://github.com/brinkqiang/dmdisablewarning)

## Build status
| [Linux][lin-link] | [Mac][mac-link] | [Windows][win-link] |
| :---------------: | :----------------: | :-----------------: |
| ![lin-badge]      | ![mac-badge]       | ![win-badge]        |

[lin-badge]: https://github.com/brinkqiang/dmdisablewarning/workflows/linux/badge.svg "linux build status"
[lin-link]:  https://github.com/brinkqiang/dmdisablewarning/actions/workflows/linux.yml "linux build status"
[mac-badge]: https://github.com/brinkqiang/dmdisablewarning/workflows/mac/badge.svg "mac build status"
[mac-link]:  https://github.com/brinkqiang/dmdisablewarning/actions/workflows/mac.yml "mac build status"
[win-badge]: https://github.com/brinkqiang/dmdisablewarning/workflows/win/badge.svg "win build status"
[win-link]:  https://github.com/brinkqiang/dmdisablewarning/actions/workflows/win.yml "win build status"

## Intro
dmdisablewarning
```cpp


#include "dmdisablewarning.h"

DISABLE_ALL_WARNINGS
#include "dmstrtk.hpp"
#include "dmlog.hpp"
ENABLE_ALL_WARNINGS

int main( int argc, char* argv[] ) {

	DMLOG_INIT();
	std::vector<int> vecData;
	strtk::parse("1,2,3,4,5,6,7,8,9", ",", vecData);

	LOG_WARN("{}", strtk::join(",", vecData));


    return 0;
}

```
## Contacts

## Thanks
