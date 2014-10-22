#include "zlibsimple.h"

int main(argc,argv)
	int argc;
char *argv[];
{
	//UnzipFiles("H:\\Dev\\thirdpart\\zlib-1.2.8\\contrib\\vstudio\\vc10\\x86\\MiniUnzipDebug\\1\\新建文件夹.zip", "1\\", 0, 1, 1);
	//UnzipFiles("H:\\Dev\\thirdpart\\zlib-1.2.8\\contrib\\vstudio\\vc10\\x86\\MiniUnzipDebug\\1\\minizip.zip", 0, 0, 1, 1);
	ZipFiles("1.zip", 1, 1, "11", "zlibsimple.ilk", "zlibwapid.dll","H:\\Dev\\thirdpart\\zlib-1.2.8\\contrib\\vstudio\\vc10\\x86\\ZilbSimpleDebug\\Tmp\\新建文 件夹1");
	return 0;
}