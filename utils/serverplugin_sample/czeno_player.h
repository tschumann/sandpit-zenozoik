
#ifndef CZENO_PALYER
#define CZENO_PALYER

class VFuncs
{
public:
	void Spawn(CBaseEntity *pThisPtr);
	void SetModel(CBaseEntity *pThisPtr, const char *name);
	void ZenoCombat(CBaseEntity *pThisPtr, int on_or_off);
};

#endif