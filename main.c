int main()
{
	sceIoRename("ur0:/tai/lolicon_DISABLED.skprx", "ur0:/tai/lolicon_.skprx");
	sceIoRename("ur0:/tai/lolicon.skprx", "ur0:/tai/lolicon_DISABLED.skprx");
	sceIoRename("ur0:/tai/lolicon_.skprx", "ur0:/tai/lolicon.skprx");
	return scePowerRequestColdReset();
}