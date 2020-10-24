# ATTENTION
This software is no longer being maintained, and most likely will never be changed again.
For preservation's sake, and for myself if I ever want to check out my old projects, these are the requirements to compile this software.

- [libctru 1.3.0](https://github.com/devkitPro/libctru/releases/tag/v1.3.0)
- [sf2dlib](https://github.com/xerpi/sf2dlib)
- [sfillib](https://github.com/xerpi/sfillib) (This is related to sf2dlib)
- [sftdlib](https://github.com/xerpi/sftdlib) (This is related to sf2dlib)

### Extra:

- sf2dlib requires citro3d, so to keep with the time period, please use [citro3d 1.3.0](https://github.com/devkitPro/citro3d/releases/tag/v1.3.0)
- sfillib requires libjpeg-turbo and libpng (and zlib?) from [3ds_portlibs](https://github.com/devkitPro/3ds_portlibs)
- sftdlib requires freetype, also from 3ds_portlibs

# Final note
I'm going to be honest, while you may have better luck depending on your setup (and in fact, my environment is currently a little strange), there's a good chance that one (or more) of the above things won't compile right away, or you'll get some kind of error, and you'll have to tinker around with it. I spent a couple hours getting MaVeRo-3D to compile, here on Oct 23, 2020. To be fair, this project is 3 years out of date, but still, it was... not fun to get this code running again. HOWEVER, *it does compile*.