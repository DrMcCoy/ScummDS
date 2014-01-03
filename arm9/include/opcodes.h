#ifndef __OPCODES_H__
#define __OPCODES_H__

int getStackList(int *args, uint maxnum);
void copyScriptString(byte *dst, int dstSize);
int popRoomAndObj(int *room);
void decodeScriptString(byte *dst, bool scriptString = false);
void decodeParseString(int m, int n);
void printString(int m, const byte *msg);
int findFreeArrayId();
byte *defineArray(int array, int type, int dim2start, int dim2end, int dim1start, int dim1end);
int readArray(int array, int idx2, int idx1);
void writeArray(int array, int idx2, int idx1, int value);
int setupStringArray(int size);
void nukeArray(int a);
void redimArray(int arrayId, int newDim2start, int newDim2end, int newDim1start, int newDim1end, int type);
void checkArrayLimits(int array, int dim2start, int dim2end, int dim1start, int dim1end);
void copyArray(int array1, int a1_dim2start, int a1_dim2end, int a1_dim1start, int a1_dim1end, int array2, int a2_dim2start, int a2_dim2end, int a2_dim1start, int a2_dim1end);
void copyArrayHelper(ArrayHeader *ah, int idx2, int idx1, int len1, byte **data, int *size, int *num);
void shuffleArray(int num, int minIdx, int maxIdx);
void getArrayDim(int array, int *dim2start, int *dim2end, int *dim1start, int *dim1end);
void sortArray(int array, int dim2start, int dim2end, int dim1start, int dim1end, int sortOrder);

void _0x00_PushByte();
void _0x01_PushWord();
void _0x02_PushDWord();
void _0x03_PushWordVar();
void _0x04_GetScriptString();
void _0x07_WordArrayRead();
void _0x0A_Dup_n();
void _0x0B_WordArrayIndexedRead();
void _0x0C_Dup();
void _0x0D_Not();
void _0x0E_Eq();
void _0x0F_Neq();
void _0x10_Gt();
void _0x11_Lt();
void _0x12_Le();
void _0x13_Ge();
void _0x14_Add();
void _0x15_Sub();
void _0x16_Mul();
void _0x17_Div();
void _0x18_Land();
void _0x19_Lor();
void _0x1A_Pop();
void _0x1B_IsAnyOf();
void _0x1C_WizImageOps();
void _0x1D_Min();
void _0x1E_Max();
void _0x22_ATan2();
void _0x25_GetSpriteInfo();
void _0x26_SetSpriteInfo();
void _0x27_GetSpriteGroupInfo();
void _0x28_SetSpriteGroupInfo();
void _0x34_FindAllObjectsWithClassOf();
void _0x37_Dim2Dim2Array();
void _0x39_GetLinesIntersectionPoint();
void _0x3A_SortArray();
void _0x43_WriteWordVar();
//void _0x46_ByteArrayWrite();
void _0x47_WordArrayWrite();
void _0x4B_WordArrayIndexedWrite();
void _0x4F_WordVarInc();
void _0x53_WordArrayInc();
void _0x57_WordVarDec();
void _0x58_GetTimer();
void _0x59_SetTimer();
void _0x5C_If();
void _0x5D_IfNot();
void _0x5E_StartScript();
void _0x61_DrawObject();
void _0x64_GetNumFreeArrays();
void _0x65_StopObjectCode();
void _0x66_StopObjectCode();
void _0x6B_CursorCommand();
void _0x6C_BreakHere();
void _0x6D_IfClassOfIs();
void _0x6E_SetClass();
void _0x6F_GetState();
void _0x70_SetState();
void _0x73_Jump();
void _0x74_StartSound();
void _0x75_StopSound();
void _0x7B_LoadRoom();
void _0x7C_StopScript();
void _0x7F_PutActorAtXY();
void _0x82_AnimateActor();
void _0x87_GetRandomNumber();
void _0x88_GetRandomNumberRange();
void _0x8B_IsScriptRunning();
void _0x8C_GetActorRoom();
void _0x8E_GetObjectY();
void _0x91_GetActorCostume();
void _0x92_FindInventory();
void _0x95_BeginOverride();
void _0x96_EndOverride();
void _0x98_IsSoundRunning();
void _0x9B_ResourceRoutines();
void _0x9C_RoomOps();
void _0x9D_ActorOps();
void _0x9E_PaletteOps();
void _0x9F_GetActorFromXY();
void _0xA0_FindObject();
void _0xA1_PseudoRoom();
void _0xA4_ArrayOps();
void _0xA5_FontUnk();
void _0xA6_DrawBox();
void _0xA7_Pop();
void _0xA9_Wait();
void _0xAD_IsAnyOf();
void _0xAE_SystemOps();
void _0xB0_Delay();
void _0xB1_DelaySeconds();
void _0xB3_StopSentence();
void _0xB4_PrintLine();
void _0xB5_PrintText();
void _0xB6_PrintDebug();
void _0xB7_PrintSystem();
void _0xB8_PrintActor();
void _0xB9_PrintEgo();
void _0xBA_TalkActor();
void _0xBC_DimArray();
void _0xBD_StopObjectCode();
void _0xBF_StartScriptQuick2();
void _0xC0_Dim2DimArray();
void _0xC1_TraceStatus();
void _0xC9_KernelSetFunctions();
void _0xCA_DelayFrames();
void _0xCB_PickOneOf();
void _0xCE_DrawWizImage();
void _0xD0_GetDateTime();
void _0xD1_StopTalking();
void _0xD2_GetAnimateVariable();
void _0xD5_JumpToScript();
void _0xD6_BAnd();
void _0xD7_BOr();
void _0xD9_CloseFile();
void _0xDA_OpenFile();
void _0xDD_FindAllObjects();
void _0xDE_DeleteFile();
void _0xE1_GetPixel();
void _0xE2_LocalizeArrayToScript();
void _0xE3_PickVarRandom();
void _0xE4_SetBoxSet();
void _0xEE_GetStringLength();
void _0xF2_IsResourceLoaded();
void _0xF3_ReadINI();
void _0xF4_WriteINI();
void _0xF9_CreateDirectory();
void _0xFA_SetSystemMessage();
void _0xFB_PolygonOps();

#endif