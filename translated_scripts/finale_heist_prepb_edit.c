#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_36[2] = { 0, 0 };
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80[2] = { 0, 0 };
	int iLocal_81[2] = { 0, 0 };
	int iLocal_82[2] = { 0, 0 };
	int iLocal_83[2] = { 0, 0 };
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	struct<3> Local_92 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	struct<3> Local_94 = { 0, 0, 0 } ;
	struct<3> Local_95[2];
	struct<3> Local_96 = { 0, 0, 0 } ;
	float fLocal_97 = 0f;
	char* sLocal_98 = NULL;
	var uLocal_99 = 16;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_278[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_279 = 0;
	int iLocal_280[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_281[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_282[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_283[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_284[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_285[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303[2] = { 0, 0 };
	int iLocal_304[2] = { 0, 0 };
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328[2] = { 0, 0 };
	int iLocal_329[2] = { 0, 0 };
	int iLocal_330[2] = { 0, 0 };
	int iLocal_331[2] = { 0, 0 };
	int iLocal_332[2] = { 0, 0 };
	int iLocal_333[2] = { 0, 0 };
	int iLocal_334[2] = { 0, 0 };
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340[2] = { 0, 0 };
	int iLocal_341[2] = { 0, 0 };
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361[2] = { 0, 0 };
	int iLocal_362 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	Local_92 = { 27.7189f, -608.7927f, 30.6293f };
	Local_96 = { 903.1f, -1548.8f, 29.8f };
	fLocal_97 = 0f;
	if (HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		N_0X706D57B0F50DA710("FHPRB_STOP");
		func_222();
		func_221();
	}
	if (func_220(0))
	{
		REQUEST_ADDITIONAL_TEXT("FINPRB", 0);
	}
	ADD_RELATIONSHIP_GROUP("WorkerPedMainGroup", &iLocal_264);
	ADD_RELATIONSHIP_GROUP("GuardMainGroup", &iLocal_265);
	SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("packer"), 1);
	SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_265, joaat("player"));
	SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_264, joaat("player"));
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_265, iLocal_264);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_264, iLocal_265);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_265, joaat("COP"));
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_265);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_264, joaat("COP"));
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_264);
	while (true)
	{
		REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_FINPRB", 0);
		if (!IS_PED_INJURED(()()))
		{
			unk_0x428AFDCAA63B06E(()(), 230, 0);
		}
		func_218();
		if (iLocal_272 == 0)
		{
			if (GET_PLAYER_WANTED_LEVEL(()()) > 0)
			{
				func_217(27, 1);
				iLocal_272 = 1;
			}
		}
		if (iLocal_295 == 1)
		{
			func_213();
		}
		func_210();
		func_203();
		func_195();
		func_190();
		func_187();
		switch (iLocal_28)
		{
			case 0:
				func_186();
				break;
			
			case 1:
				func_183();
				break;
			
			case 2:
				func_159();
				break;
			
			case 3:
				func_157();
				break;
			
			case 4:
				func_129();
				break;
			
			case 5:
				func_21();
				break;
			
			case 6:
				func_1();
				break;
		}
		wait(0);
	}
}

void func_1()
{
	switch (iLocal_53)
	{
		case 0:
			CLEAR_PRINTS();
			CLEAR_HELP(1);
			N_0X706D57B0F50DA710("FHPRA_FAIL");
			switch (iLocal_30)
			{
				case 0:
					break;
				
				case 4:
					sLocal_98 = "FPB_FAIL1";
					break;
				
				case 3:
					sLocal_98 = "FPB_FAIL2";
					break;
				
				case 1:
					sLocal_98 = "FPB_FAIL3";
					break;
				
				case 2:
					sLocal_98 = "FPB_FAIL10";
					break;
				
				case 5:
					if (func_14() == 0)
					{
						sLocal_98 = "FPB_FAIL7";
					}
					if (func_14() == 2)
					{
						sLocal_98 = "FPB_FAIL8";
					}
					if (func_14() == 1)
					{
						sLocal_98 = "FPB_FAIL9";
					}
					break;
				
				case 6:
					sLocal_98 = "FPB_FAIL11";
					break;
			}
			if (iLocal_30 == 0)
			{
				func_6(0);
			}
			else
			{
				func_4(sLocal_98);
			}
			iLocal_53 = 1;
			break;
		
		case 1:
			if (func_3())
			{
				if (func_2())
				{
				}
				func_221();
			}
			break;
	}
}

int func_2()
{
	if (Global_100681 == 7)
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_100681 == 7 || Global_100681 == 8)
	{
		return 1;
	}
	return 0;
}

void func_4(char* sParam0)
{
	func_5(sParam0);
	func_6(0);
}

void func_5(char* sParam0)
{
	if (!IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (unk_0x9112CCF7824FE38(sParam0) <= 16)
		{
			StringCopy(&Global_78791, sParam0, 16);
			StringCopy(&Global_78795, "", 16);
			if (IS_REPLAY_RECORDING())
			{
				STOP_REPLAY_RECORDING();
			}
		}
	}
}

void func_6(int iParam0)
{
	int iVar0;
	
	if (Global_113648.f_9087 || func_220(0))
	{
		iVar0 = func_13();
		if (!func_7(iVar0))
		{
			return;
		}
		SET_BIT(&(Global_91433[iVar0 /*5*/].f_1), 5);
		Global_100717 = iParam0;
	}
}

int func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_12();
	if (IS_PLAYER_PLAYING(()()))
	{
		START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91433[iParam0 /*5*/];
	iVar1 = Global_78828.f_109[iVar0 /*4*/];
	func_11(iVar1, 1);
	SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(()(), 0);
	SPECIAL_ABILITY_DEACTIVATE(()(), 0);
	func_8(&(Global_113648.f_2365.f_539), iVar1);
	if (Global_94856 == Global_100718)
	{
		Global_113648.f_9087.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91469[iVar1 /*34*/].f_15, 1))
	{
		if (!IS_PLAYER_PLAYING(()()))
		{
			SET_FADE_IN_AFTER_DEATH_ARREST(0);
		}
	}
	Global_113648.f_9087.f_330[iVar1 /*6*/].f_2++;
	Global_94856 = Global_100718;
	if (iParam0 == -1)
	{
		if (Global_113648.f_9087)
		{
		}
		return 0;
	}
	if (BitTest(Global_91433[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_91433[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_8(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113648.f_18535[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113648.f_9087.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_10(Global_113648.f_18535[iVar0], &Var2, &fVar3))
			{
				Global_113648.f_18535[iVar0] = 318;
				func_9(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_98071[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_98071[iVar0 /*29*/].f_9 = 0f;
				Global_98071[iVar0 /*29*/].f_12 = 0f;
				Global_98071[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_98071[iVar0 /*29*/].f_10 = 0f;
				Global_98071[iVar0 /*29*/].f_13 = 0f;
				Global_98071[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_98071[iVar0 /*29*/].f_11 = 0f;
				Global_98071[iVar0 /*29*/].f_14 = 0f;
				Global_98071[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_98071[iVar0 /*29*/].f_26 = 0f;
				Global_98071[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_98071[iVar0 /*29*/].f_27 = 0f;
				Global_98071[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_98071[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_9(var uParam0)
{
	*uParam0 = -15;
}

int func_10(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_10(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_10(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_11(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_94666[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_94666[iParam0 /*2*/] = 0;
	}
}

void func_12()
{
	Global_100716 = 1;
	if (IS_PLAYER_BEING_ARRESTED(()(), 1))
	{
		if (IS_STRING_NULL_OR_EMPTY(&Global_78791))
		{
			switch (func_14())
			{
				case 0:
					StringCopy(&Global_78791, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_78791, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_78791, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_78795, "", 16);
		}
		Global_100716 = 0;
	}
	else if (!IS_PLAYER_PLAYING(()()))
	{
		if (IS_STRING_NULL_OR_EMPTY(&Global_78791))
		{
			switch (func_14())
			{
				case 0:
					StringCopy(&Global_78791, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_78791, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_78791, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_78795, "", 16);
		}
		Global_100716 = 0;
		SET_BIT(&(Global_100681.f_20), 25);
	}
}

int func_13()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_91433[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_14()
{
	func_15();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_15()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(()()))
	{
		if (func_19(Global_113648.f_2365.f_539.f_4321) != GET_ENTITY_MODEL(()()))
		{
			iVar0 = func_18(()());
			if (func_17(iVar0) && (!func_16(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_17(Global_113648.f_2365.f_539.f_4321))
				{
					Global_113648.f_2365.f_539.f_4322 = Global_113648.f_2365.f_539.f_4321;
				}
				Global_113648.f_2365.f_539.f_4323 = iVar0;
				Global_113648.f_2365.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113648.f_2365.f_539.f_4321 != 145)
			{
				Global_113648.f_2365.f_539.f_4323 = Global_113648.f_2365.f_539.f_4321;
			}
			return;
		}
	}
	Global_113648.f_2365.f_539.f_4321 = 145;
}

bool func_16(int iParam0)
{
	return Global_43257 == iParam0;
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_19(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_19(int iParam0)
{
	if (func_17(iParam0))
	{
		return func_20(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_20(int iParam0)
{
	return Global_2028[iParam0 /*29*/];
}

void func_21()
{
	func_187();
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_35();
			iLocal_266 = 0;
		}
		iLocal_273 = 0;
		iLocal_274 = 0;
		iLocal_275 = 0;
		SET_PLAYER_CONTROL(()(), 0, 0);
		if (func_34(iLocal_37, 0))
		{
			if (!func_33(iLocal_37))
			{
				while (!func_32(iLocal_37, 0))
				{
					wait(0);
				}
			}
		}
		if (func_34(iLocal_39, 0))
		{
			if (!func_33(iLocal_39))
			{
				while (!func_32(iLocal_39, 0))
				{
					wait(0);
				}
			}
		}
		if (func_34(iLocal_38, 0))
		{
			if (!func_33(iLocal_38))
			{
				while (!func_32(iLocal_38, 0))
				{
					wait(0);
				}
			}
		}
		if (IS_SCREEN_FADED_OUT())
		{
			if (!func_31())
			{
				LOAD_SCENE(GET_ENTITY_COORDS(()(), 1));
			}
			func_28(iLocal_33, -1, 1);
		}
		if (!IS_SCREEN_FADED_IN())
		{
			DO_SCREEN_FADE_IN(800);
		}
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		if (DOES_ENTITY_EXIST(iLocal_33))
		{
			if (IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
			{
				if (func_14() == 0)
				{
					if (func_34(iLocal_39, 0))
					{
						if (IS_PED_IN_VEHICLE(iLocal_39, iLocal_33, 0))
						{
							CLEAR_PED_TASKS(iLocal_39);
							REMOVE_PED_FROM_GROUP(iLocal_39);
							SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_39, 1);
							TASK_LEAVE_VEHICLE(iLocal_39, iLocal_33, 0);
						}
					}
					if (func_34(iLocal_38, 0))
					{
						if (IS_PED_IN_VEHICLE(iLocal_38, iLocal_33, 0))
						{
							CLEAR_PED_TASKS(iLocal_38);
							REMOVE_PED_FROM_GROUP(iLocal_38);
							SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_38, 1);
							TASK_LEAVE_VEHICLE(iLocal_38, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 2)
				{
					if (func_34(iLocal_37, 0))
					{
						if (IS_PED_IN_VEHICLE(iLocal_37, iLocal_33, 0))
						{
							CLEAR_PED_TASKS(iLocal_37);
							REMOVE_PED_FROM_GROUP(iLocal_37);
							SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_37, 1);
							TASK_LEAVE_VEHICLE(iLocal_37, iLocal_33, 0);
						}
					}
					if (func_34(iLocal_38, 0))
					{
						if (IS_PED_IN_VEHICLE(iLocal_38, iLocal_33, 0))
						{
							CLEAR_PED_TASKS(iLocal_38);
							REMOVE_PED_FROM_GROUP(iLocal_38);
							SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_38, 1);
							TASK_LEAVE_VEHICLE(iLocal_38, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 1)
				{
					if (func_34(iLocal_37, 0))
					{
						if (IS_PED_IN_VEHICLE(iLocal_37, iLocal_33, 0))
						{
							CLEAR_PED_TASKS(iLocal_37);
							REMOVE_PED_FROM_GROUP(iLocal_37);
							SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_37, 1);
							TASK_LEAVE_VEHICLE(iLocal_37, iLocal_33, 0);
						}
					}
					if (func_34(iLocal_39, 0))
					{
						if (IS_PED_IN_VEHICLE(iLocal_39, iLocal_33, 0))
						{
							CLEAR_PED_TASKS(iLocal_39);
							REMOVE_PED_FROM_GROUP(iLocal_39);
							SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_39, 1);
							TASK_LEAVE_VEHICLE(iLocal_39, iLocal_33, 0);
						}
					}
				}
				if (IS_PED_IN_VEHICLE(()(), iLocal_33, 0))
				{
					TASK_LEAVE_VEHICLE(()(), iLocal_33, 0);
				}
			}
		}
		settimerb(0);
		iLocal_53 = 2;
	}
	if (iLocal_53 == 2)
	{
		if (DOES_ENTITY_EXIST(iLocal_33))
		{
			if (IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
			{
				if (iLocal_275 == 0)
				{
					if (func_14() == 0)
					{
						if (func_34(iLocal_39, 0))
						{
							if (!IS_PED_IN_VEHICLE(iLocal_39, iLocal_33, 0))
							{
								if (func_33(iLocal_39))
								{
									if (func_25(iLocal_39))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
						if (func_34(iLocal_38, 0))
						{
							if (!IS_PED_IN_VEHICLE(iLocal_38, iLocal_33, 0))
							{
								if (func_33(iLocal_38))
								{
									if (func_25(iLocal_38))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_274 = 1;
						}
					}
					if (func_14() == 2)
					{
						if (func_34(iLocal_37, 0))
						{
							if (!IS_PED_IN_VEHICLE(iLocal_37, iLocal_33, 0))
							{
								if (func_33(iLocal_37))
								{
									if (func_25(iLocal_37))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
						if (func_34(iLocal_38, 0))
						{
							if (!IS_PED_IN_VEHICLE(iLocal_38, iLocal_33, 0))
							{
								if (func_33(iLocal_38))
								{
									if (func_25(iLocal_38))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_274 = 1;
						}
					}
					if (func_14() == 1)
					{
						if (func_34(iLocal_37, 0))
						{
							if (!IS_PED_IN_VEHICLE(iLocal_37, iLocal_33, 0))
							{
								if (func_33(iLocal_37))
								{
									if (func_25(iLocal_37))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
						if (func_34(iLocal_39, 0))
						{
							if (!IS_PED_IN_VEHICLE(iLocal_39, iLocal_33, 0))
							{
								if (func_33(iLocal_39))
								{
									if (func_25(iLocal_39))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_274 = 1;
						}
					}
					if (iLocal_273 == 1 && iLocal_274 == 1)
					{
						iLocal_275 = 1;
					}
				}
				else if (!IS_PED_IN_VEHICLE(()(), iLocal_33, 1))
				{
					SET_PLAYER_CONTROL(()(), 1, 0);
					settimerb(0);
					iLocal_53 = 3;
				}
			}
		}
	}
	if (iLocal_53 == 3)
	{
		if (DOES_ENTITY_EXIST(iLocal_33))
		{
			if (IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
			{
				SET_VEHICLE_DOORS_SHUT(iLocal_33, 0);
				unk_0xB74F181ADFC39BF(iLocal_33, 2);
				FREEZE_ENTITY_POSITION(iLocal_33, 1);
			}
		}
		if (DOES_ENTITY_EXIST(iLocal_32))
		{
			if (IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
			{
				FREEZE_ENTITY_POSITION(iLocal_32, 1);
			}
		}
		iLocal_53 = 4;
	}
	if (iLocal_53 == 4)
	{
		func_22();
	}
}

void func_22()
{
	func_23(0, 0);
	func_221();
}

void func_23(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_63364)
	{
		Global_63364 = iParam1;
	}
	if (bParam0)
	{
		if ((func_220(0) && Global_78805.f_1 == 1) && func_24(Global_78805))
		{
		}
		else
		{
			Global_63362 = 1;
		}
	}
	if (Global_113648.f_9087 || func_220(0))
	{
		iVar0 = func_13();
		iVar1 = Global_91433[iVar0 /*5*/];
		uVar2 = Global_78828.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_113648.f_9087)
			{
			}
			return;
		}
		if (BitTest(Global_91433[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_91433[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		SET_BIT(&(Global_91433[iVar0 /*5*/].f_1), 4);
		SET_BIT(&Global_78807, true);
		Global_78823 = uVar2;
		Global_78824 = GET_GAME_TIMER();
	}
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_25(int iParam0)
{
	bool bVar0;
	
	return 0;
	if (!IS_PED_INJURED(iParam0))
	{
		bVar0 = func_18(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_26(bVar0) != iParam0)
		{
			return 0;
		}
		if (!BitTest(Global_96535, bVar0))
		{
			return 0;
		}
		CLEAR_BIT(&Global_96535, bVar0);
		return 1;
	}
	return 0;
}

int func_26(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_14())
	{
		return ()();
	}
	return Global_98159[func_27(iParam0)];
}

int func_27(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

void func_28(int iParam0, int iParam1, int iParam2)
{
	if (func_30() && func_31())
	{
		while (Global_100676 != 6)
		{
			wait(0);
		}
		SET_GAME_PAUSED(0);
		if (DOES_ENTITY_EXIST(()()))
		{
			if (!IS_PED_INJURED(()()))
			{
				CLEAR_PED_WETNESS(()());
			}
		}
		if (iParam0 != 0)
		{
			if (!IS_PED_INJURED(()()))
			{
				if (DOES_ENTITY_EXIST(iParam0))
				{
					if (IS_VEHICLE_DRIVEABLE(iParam0, 0))
					{
						if (!IS_PED_IN_VEHICLE(()(), iParam0, 0))
						{
							SET_PED_INTO_VEHICLE(()(), iParam0, iParam1);
							SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (IS_PLAYER_PLAYING(()()))
			{
				SET_PLAYER_CONTROL(()(), 1, 0);
			}
		}
		ANIMPOSTFX_STOP_ALL();
		func_29(0);
	}
}

void func_29(int iParam0)
{
	if (iParam0 == 1)
	{
		SET_BIT(&(Global_100681.f_20), 13);
	}
	else
	{
		CLEAR_BIT(&(Global_100681.f_20), 13);
	}
}

int func_30()
{
	if (Global_100681 == 10 || Global_100681 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_31()
{
	return BitTest(Global_100681.f_20, 13);
}

int func_32(int iParam0, int iParam1)
{
	bool bVar0;
	
	return 0;
	if (!IS_PED_INJURED(iParam0))
	{
		bVar0 = func_18(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_26(bVar0) != iParam0)
		{
			return 0;
		}
		if (BitTest(Global_96535, bVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == ()())
			{
				return 0;
			}
		}
		if (BitTest(Global_96534, bVar0))
		{
			SET_PED_INFINITE_AMMO(iParam0, 0, 0);
			SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, 0, 1);
			SET_BIT(&Global_96535, bVar0);
			return 1;
		}
	}
	return 0;
}

int func_33(int iParam0)
{
	bool bVar0;
	
	return 0;
	if (!IS_PED_INJURED(iParam0))
	{
		bVar0 = func_18(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_26(bVar0) != iParam0)
		{
			return 0;
		}
		if (BitTest(Global_96535, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_34(int iParam0, int iParam1)
{
	bool bVar0;
	
	return 0;
	if (!IS_PED_INJURED(iParam0))
	{
		bVar0 = func_18(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_26(bVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == ()())
			{
				return 0;
			}
		}
		if (BitTest(Global_96534, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_35()
{
	iLocal_295 = 0;
	iLocal_337 = 0;
	SET_PLAYER_WANTED_LEVEL(()(), 0, 0);
	SET_PLAYER_WANTED_LEVEL_NOW(()(), 0);
	if (!IS_SCREEN_FADED_OUT())
	{
		DO_SCREEN_FADE_OUT(0);
	}
	func_127();
	CLEAR_PRINTS();
	func_126();
	func_125();
	func_37();
	if (!func_31())
	{
		func_36();
	}
	SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}

void func_36()
{
	switch (iLocal_28)
	{
		case 2:
			SET_ENTITY_COORDS(()(), 856.9501f, -1573.177f, 29.4751f, 1, 0, 0, 1);
			SET_ENTITY_HEADING(()(), 288.3586f);
			break;
		
		case 3:
			SET_ENTITY_COORDS(()(), 856.9501f, -1573.177f, 29.4751f, 1, 0, 0, 1);
			SET_ENTITY_HEADING(()(), 288.3586f);
			break;
		
		case 4:
			if (DOES_ENTITY_EXIST(iLocal_33))
			{
				if (IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
				{
					if (!IS_PED_IN_VEHICLE(()(), iLocal_33, 0))
					{
						SET_PED_INTO_VEHICLE(()(), iLocal_33, -1);
					}
				}
			}
			break;
		
		case 5:
			if (DOES_ENTITY_EXIST(iLocal_33))
			{
				if (IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
				{
					if (!IS_PED_IN_VEHICLE(()(), iLocal_33, 0))
					{
						SET_PED_INTO_VEHICLE(()(), iLocal_33, -1);
					}
				}
			}
			break;
	}
}

void func_37()
{
	switch (iLocal_28)
	{
		case 3:
			iLocal_313 = 0;
			iLocal_314 = 0;
			iLocal_315 = 0;
			func_121();
			if (func_120() && func_117(7f, 7f, 7f, 1))
			{
				func_115();
				while (!func_114())
				{
					wait(0);
				}
				iLocal_34 = func_38(818.8139f, -1610.406f, 30.7951f, 264.412f);
			}
			SET_WANTED_LEVEL_MULTIPLIER(0.01f);
			break;
		
		case 4:
			iLocal_313 = 0;
			iLocal_314 = 0;
			iLocal_315 = 0;
			func_121();
			if (DOES_ENTITY_EXIST(iLocal_33))
			{
				if (IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
				{
					SET_ENTITY_COORDS(iLocal_33, 89.2131f, -596.9456f, 30.6224f, 1, 0, 0, 1);
					SET_ENTITY_HEADING(iLocal_33, 161.1163f);
				}
			}
			CLEAR_AREA(41f, -615f, 30f, 50f, 1, 1, 0, 0);
			break;
		
		case 5:
			iLocal_313 = 1;
			iLocal_314 = 1;
			iLocal_315 = 1;
			func_121();
			CLEAR_AREA(41f, -615f, 30f, 50f, 1, 1, 0, 0);
			if (DOES_ENTITY_EXIST(iLocal_33))
			{
				if (IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
				{
					SET_ENTITY_COORDS(iLocal_33, 28.4065f, -608.9371f, 30.6293f, 1, 0, 0, 1);
					SET_ENTITY_HEADING(iLocal_33, 70.7778f);
				}
			}
			REQUEST_MODEL(joaat("s_m_m_security_01"));
			while (!HAS_MODEL_LOADED(joaat("s_m_m_security_01")))
			{
				wait(0);
			}
			if (!DOES_ENTITY_EXIST(iLocal_40))
			{
				iLocal_40 = CREATE_PED(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, 1);
				SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
				unk_0x428AFDCAA63B06E(iLocal_40, 324, 1);
			}
			break;
	}
}

int func_38(struct<3> Param0, float fParam1)
{
	return func_39(&(Global_104212.f_2890), Param0, fParam1, 0);
}

int func_39(var uParam0, struct<3> Param1, float fParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_113(uParam0))
	{
		if (func_112(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (IS_POINT_IN_ANGLED_AREA(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam2 = 89.5f;
			}
		}
		if (func_111(uParam0))
		{
			CLEAR_AREA(Param1, 5f, 1, 0, 0, 0);
			func_110(Param1, 5f, 0);
			iVar0 = CREATE_VEHICLE(uParam0->f_12.f_66, Param1, fParam2, 1, 1, 0);
			if (DOES_ENTITY_EXIST(iVar0))
			{
				Var1 = { GET_ENTITY_COORDS(iVar0, 1) };
				if (vdist2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, 0, 0, 1);
				}
				func_82(iVar0, &(uParam0->f_12), 0, 1);
				bVar2 = true;
				if (IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_66) || IS_THIS_MODEL_A_JETSKI(uParam0->f_12.f_66))
				{
					if (!TEST_PROBE_AGAINST_WATER(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (IS_THIS_MODEL_A_CAR(GET_ENTITY_MODEL(iVar0)))
						{
							func_81(uParam0->f_11, 1);
						}
						else if (IS_THIS_MODEL_A_BIKE(GET_ENTITY_MODEL(iVar0)))
						{
							func_81(uParam0->f_11, 2);
						}
					}
					SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iVar0, 0);
					SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, 0);
					SET_VEHICLE_HAS_STRONG_AXLES(iVar0, 1);
					func_80(iVar0, uParam0->f_11);
				}
				else if ((!func_77(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && ARE_STRINGS_EQUAL(GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					iVar4 = func_76(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_69(iVar4);
					}
				}
				if (((Global_100681 != 13 && Global_100681 != 10) && Global_100681 != 11) && Global_100681 != 12)
				{
					if (GET_HASH_KEY(&(Global_100681.f_3)) == Global_78336)
					{
						if (uParam0->f_12.f_66 == Global_113648.f_32751.f_69[21 /*78*/].f_66)
						{
							func_66(24, 0);
							func_69(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_40(iVar0, uParam0->f_11);
				}
				SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_66);
				Var1 = { GET_ENTITY_COORDS(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_40(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_46(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
		if (!DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (DOES_ENTITY_EXIST(iVar0) && !IS_PED_INJURED(iVar0))
		{
			if (GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113648.f_2365.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (GET_ENTITY_MODEL(iParam0) == Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!IS_STRING_NULL_OR_EMPTY(&(Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (ARE_STRINGS_EQUAL(GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113648.f_32751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113648.f_32751.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (GET_ENTITY_MODEL(iParam0) == Global_113648.f_32751.f_5600[iVar1 /*78*/].f_66)
		{
			if (!IS_STRING_NULL_OR_EMPTY(&(Global_113648.f_32751.f_5600[iVar1 /*78*/].f_1)))
			{
				if (ARE_STRINGS_EQUAL(GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113648.f_32751.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113648.f_32751.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113648.f_32751.f_5590 = iParam1;
	Global_78253 = iParam0;
	Global_113648.f_32751.f_5588 = 1;
	func_41(iParam0, &(Global_113648.f_32751.f_5510));
}

void func_41(int iParam0, var uParam1)
{
	int iVar0;
	
	if (IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_45(uParam1);
		uParam1->f_66 = GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		unk_0x4434FA56DED5500(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		GET_VEHICLE_NEON_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (GET_VEHICLE_NEON_ENABLED(iParam0, 2))
		{
			SET_BIT(&(uParam1->f_77), 28);
		}
		if (GET_VEHICLE_NEON_ENABLED(iParam0, 3))
		{
			SET_BIT(&(uParam1->f_77), 29);
		}
		if (GET_VEHICLE_NEON_ENABLED(iParam0, 0))
		{
			SET_BIT(&(uParam1->f_77), 30);
		}
		if (GET_VEHICLE_NEON_ENABLED(iParam0, 1))
		{
			SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_44(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_68 = GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (unk_0xC6FDED3EB75117(uParam1->f_66))
		{
			if (IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						CLEAR_BIT(&(uParam1->f_77), 23);
						SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						CLEAR_BIT(&(uParam1->f_77), 23);
						CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			SET_BIT(&(uParam1->f_77), 9);
		}
		if (IS_VEHICLE_STOLEN(iParam0))
		{
			SET_BIT(&(uParam1->f_77), 10);
		}
		if (GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			SET_BIT(&(uParam1->f_77), 13);
			GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			SET_BIT(&(uParam1->f_77), 12);
		}
		func_43(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				SET_BIT(&(uParam1->f_77), func_42(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0xBCE48C8677F9824(iParam0, 0))
		{
			SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_43(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_45(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_46(int iParam0)
{
	if ((((((((((!DOES_ENTITY_EXIST(iParam0) || !IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_64(iParam0, 0, 0)) || func_64(iParam0, 1, 0)) || func_64(iParam0, 2, 0)) || func_63(iParam0) != 145) || func_62(iParam0)) || func_61(iParam0)) || func_60(iParam0)) || func_59(iParam0)) || !func_47(GET_ENTITY_MODEL(iParam0)))
	{
		if (func_61(iParam0))
		{
		}
		if (func_61(iParam0))
		{
		}
		if (func_64(iParam0, 0, 0))
		{
		}
		if (func_64(iParam0, 1, 0))
		{
		}
		if (func_64(iParam0, 2, 0))
		{
		}
		if (func_63(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_47(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_48(iParam0, 0, -1))
	{
		return 0;
	}
	if (((IS_THIS_MODEL_A_BOAT(iParam0) || unk_0xC6FDED3EB75117(iParam0)) || IS_THIS_MODEL_A_HELI(iParam0)) || IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_48(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_58())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < GET_NUM_DLC_VEHICLES())
		{
			if (GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (IS_CONTENT_ITEM_LOCKED(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_57() && !func_56()) && !func_55()) && !func_54()) && !func_58())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((func_53() || IS_PC_VERSION()) || func_52())
		{
		}
		else if (!func_55())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_51(iParam0, iParam2))
		{
			return 0;
		}
	}
	if (!func_49(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_49(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_50())
	{
		return 1;
	}
	NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_50()
{
	if (IS_PC_VERSION())
	{
		return NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_51(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if ((!Global_2764244 && iParam1 >= 0) && iParam1 <= 415)
	{
		if (BitTest(Global_1586468[iParam1 /*142*/].f_103, 2))
		{
			return 1;
		}
	}
	if (Global_2764243)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = GET_CLOUD_TIME_AS_INT();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_7059 && !Global_262145.f_13397) && iVar1 < Global_262145.f_13398)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14737 && iVar1 < Global_262145.f_14749)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14733 && iVar1 < Global_262145.f_14745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14734 && iVar1 < Global_262145.f_14746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14735 && iVar1 < Global_262145.f_14747)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14736 && iVar1 < Global_262145.f_14748)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14738 && iVar1 < Global_262145.f_14750)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14739 && iVar1 < Global_262145.f_14742)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14740 && iVar1 < Global_262145.f_14743)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14741 && iVar1 < Global_262145.f_14744)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17313 && iVar1 < Global_262145.f_17278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17308 && iVar1 < Global_262145.f_17273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17312 && iVar1 < Global_262145.f_17277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17311 && iVar1 < Global_262145.f_17276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17305 && iVar1 < Global_262145.f_17270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17306 && iVar1 < Global_262145.f_17271)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17309 && iVar1 < Global_262145.f_17274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17310 && iVar1 < Global_262145.f_17275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17307 && iVar1 < Global_262145.f_17272)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17315 && iVar1 < Global_262145.f_17280)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17316 && iVar1 < Global_262145.f_17281)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17304 && iVar1 < Global_262145.f_17269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17303 && iVar1 < Global_262145.f_17268)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17302 && iVar1 < Global_262145.f_17267)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17314 && iVar1 < Global_262145.f_17279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17317 && iVar1 < Global_262145.f_17282)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17318 && iVar1 < Global_262145.f_17283)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17319 && iVar1 < Global_262145.f_17284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17320 && iVar1 < Global_262145.f_17285)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17474 && iVar1 < Global_262145.f_17496)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17475 && iVar1 < Global_262145.f_17497)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17476 && iVar1 < Global_262145.f_17498)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17477 && iVar1 < Global_262145.f_17499)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17478 && iVar1 < Global_262145.f_17500)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17479 && iVar1 < Global_262145.f_17501)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17481 && iVar1 < Global_262145.f_17502)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17482 && iVar1 < Global_262145.f_17503)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17483 && iVar1 < Global_262145.f_17504)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17484 && iVar1 < Global_262145.f_17505)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17485 && iVar1 < Global_262145.f_17506)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17486 && iVar1 < Global_262145.f_17507)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17487 && iVar1 < Global_262145.f_17508)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17493 && iVar1 < Global_262145.f_17515)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17490 && iVar1 < Global_262145.f_17511)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17491 && iVar1 < Global_262145.f_17512)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17492 && iVar1 < Global_262145.f_17513)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17480 && iVar1 < Global_262145.f_17514)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17494 && iVar1 < Global_262145.f_17516)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17488 && iVar1 < Global_262145.f_17509)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17489 && iVar1 < Global_262145.f_17510)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17495 && iVar1 < Global_262145.f_17517)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_19131 && iVar1 < Global_262145.f_19228)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_19132 && iVar1 < Global_262145.f_19229)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_19133 && iVar1 < Global_262145.f_19230)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_19134 && iVar1 < Global_262145.f_19231)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_19135 && iVar1 < Global_262145.f_19232)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_19136 && iVar1 < Global_262145.f_19233)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_19137 && iVar1 < Global_262145.f_19234)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_19138 && iVar1 < Global_262145.f_19235)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_19139 && iVar1 < Global_262145.f_19236)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_19140 && iVar1 < Global_262145.f_19237)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_19141 && iVar1 < Global_262145.f_19238)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_19142 && iVar1 < Global_262145.f_19239)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_19143 && iVar1 < Global_262145.f_19240)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_19144 && iVar1 < Global_262145.f_19241)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_19145 && iVar1 < Global_262145.f_19242)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_19146 && iVar1 < Global_262145.f_19243)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_19147 && iVar1 < Global_262145.f_19244)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_19148 && iVar1 < Global_262145.f_19245)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_19149 && iVar1 < Global_262145.f_19246)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_19150 && iVar1 < Global_262145.f_19247)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_19151 && iVar1 < Global_262145.f_19248)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_19152 && iVar1 < Global_262145.f_19249)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_19153 && iVar1 < Global_262145.f_19250)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_19154 && iVar1 < Global_262145.f_19251)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_19155 && iVar1 < Global_262145.f_19252)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20212 && iVar1 < Global_262145.f_20208)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20213 && iVar1 < Global_262145.f_20209)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20214 && iVar1 < Global_262145.f_20210)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20215 && iVar1 < Global_262145.f_20211)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_21094 && iVar1 < Global_262145.f_21102)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_21095 && iVar1 < Global_262145.f_21103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_21096 && iVar1 < Global_262145.f_21104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_21097 && iVar1 < Global_262145.f_21105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_21098 && iVar1 < Global_262145.f_21106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_21099 && iVar1 < Global_262145.f_21107)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21893 && iVar1 < Global_262145.f_21913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21905 && iVar1 < Global_262145.f_21925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21896 && iVar1 < Global_262145.f_21916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21906 && iVar1 < Global_262145.f_21926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21894 && iVar1 < Global_262145.f_21914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21910 && iVar1 < Global_262145.f_21930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21908 && iVar1 < Global_262145.f_21928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21909 && iVar1 < Global_262145.f_21929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21904 && iVar1 < Global_262145.f_21924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21911 && iVar1 < Global_262145.f_21931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21907 && iVar1 < Global_262145.f_21927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21903 && iVar1 < Global_262145.f_21923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21895 && iVar1 < Global_262145.f_21915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21897 && iVar1 < Global_262145.f_21917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21898 && iVar1 < Global_262145.f_21918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21899 && iVar1 < Global_262145.f_21919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21900 && iVar1 < Global_262145.f_21920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21901 && iVar1 < Global_262145.f_21921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21902 && iVar1 < Global_262145.f_21922)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22861 && iVar1 < Global_262145.f_22889)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22862 && iVar1 < Global_262145.f_22890)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22863 && iVar1 < Global_262145.f_22891)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22864 && iVar1 < Global_262145.f_22892)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22865 && iVar1 < Global_262145.f_22893)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22866 && iVar1 < Global_262145.f_22894)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22867 && iVar1 < Global_262145.f_22895)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22868 && iVar1 < Global_262145.f_22896)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22869 && iVar1 < Global_262145.f_22897)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22870 && iVar1 < Global_262145.f_22898)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22871 && iVar1 < Global_262145.f_22899)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22872 && iVar1 < Global_262145.f_22900)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22873 && iVar1 < Global_262145.f_22901)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22874 && iVar1 < Global_262145.f_22902)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22875 && iVar1 < Global_262145.f_22903)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22876 && iVar1 < Global_262145.f_22904)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22877 && iVar1 < Global_262145.f_22905)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22878 && iVar1 < Global_262145.f_22906)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22879 && iVar1 < Global_262145.f_22907)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22880 && iVar1 < Global_262145.f_22908)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22881 && iVar1 < Global_262145.f_22909)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22882 && iVar1 < Global_262145.f_22910)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22883 && iVar1 < Global_262145.f_22911)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22884 && iVar1 < Global_262145.f_22912)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22885 && iVar1 < Global_262145.f_22913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22886 && iVar1 < Global_262145.f_22914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22887 && iVar1 < Global_262145.f_22915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22888 && iVar1 < Global_262145.f_22916)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_24081 && iVar1 < Global_262145.f_24097)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_24082 && iVar1 < Global_262145.f_24098)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_24086 && iVar1 < Global_262145.f_24102)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_24089 && iVar1 < Global_262145.f_24105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_24094 && iVar1 < Global_262145.f_24110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_24088 && iVar1 < Global_262145.f_24104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_24080 && iVar1 < Global_262145.f_24096)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_24087 && iVar1 < Global_262145.f_24103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_24093 && iVar1 < Global_262145.f_24109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_24092 && iVar1 < Global_262145.f_24108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_24083 && iVar1 < Global_262145.f_24099)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_24085 && iVar1 < Global_262145.f_24101)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_24095 && iVar1 < Global_262145.f_24111)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_24091 && iVar1 < Global_262145.f_24107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_24084 && iVar1 < Global_262145.f_24100)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_24090 && iVar1 < Global_262145.f_24106)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_24171 && iVar1 < Global_262145.f_24158)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_24172 && iVar1 < Global_262145.f_24159)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_24177 && iVar1 < Global_262145.f_24164)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_24176 && iVar1 < Global_262145.f_24163)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_24174 && iVar1 < Global_262145.f_24161)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_24180 && iVar1 < Global_262145.f_24167)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_24182 && iVar1 < Global_262145.f_24169)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_24183 && iVar1 < Global_262145.f_24170)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_24181 && iVar1 < Global_262145.f_24168)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_24173 && iVar1 < Global_262145.f_24160)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_24175 && iVar1 < Global_262145.f_24162)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_24179 && iVar1 < Global_262145.f_24166)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_24178 && iVar1 < Global_262145.f_24165)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26768 && iVar1 < Global_262145.f_26770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25781 && iVar1 < Global_262145.f_25774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25782 && iVar1 < Global_262145.f_25775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25783 && iVar1 < Global_262145.f_25776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25784 && iVar1 < Global_262145.f_25777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26769 && iVar1 < Global_262145.f_26771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25785 && iVar1 < Global_262145.f_25778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25786 && iVar1 < Global_262145.f_25779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25787 && iVar1 < Global_262145.f_25780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25792 && iVar1 < Global_262145.f_25813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25793 && iVar1 < Global_262145.f_25814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25794 && iVar1 < Global_262145.f_25815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25795 && iVar1 < Global_262145.f_25816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25796 && iVar1 < Global_262145.f_25817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25797 && iVar1 < Global_262145.f_25818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25798 && iVar1 < Global_262145.f_25819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25799 && iVar1 < Global_262145.f_25820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25800 && iVar1 < Global_262145.f_25821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25801 && iVar1 < Global_262145.f_25822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25802 && iVar1 < Global_262145.f_25823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25803 && iVar1 < Global_262145.f_25824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25804 && iVar1 < Global_262145.f_25825)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25805 && iVar1 < Global_262145.f_25826)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25806 && iVar1 < Global_262145.f_25827)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25807 && iVar1 < Global_262145.f_25828)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25808 && iVar1 < Global_262145.f_25829)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25809 && iVar1 < Global_262145.f_25830)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25810 && iVar1 < Global_262145.f_25831)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25811 && iVar1 < Global_262145.f_25832)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25812 && iVar1 < Global_262145.f_25833)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28613 && iVar1 < Global_262145.f_28634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28614 && iVar1 < Global_262145.f_28635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28615 && iVar1 < Global_262145.f_28636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28616 && iVar1 < Global_262145.f_28637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28617 && iVar1 < Global_262145.f_28638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28618 && iVar1 < Global_262145.f_28639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28619 && iVar1 < Global_262145.f_28640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28620 && iVar1 < Global_262145.f_28641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28621 && iVar1 < Global_262145.f_28642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28622 && iVar1 < Global_262145.f_28643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28623 && iVar1 < Global_262145.f_28644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28624 && iVar1 < Global_262145.f_28645)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28625 && iVar1 < Global_262145.f_28646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28626 && iVar1 < Global_262145.f_28647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28627 && iVar1 < Global_262145.f_28648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28628 && iVar1 < Global_262145.f_28649)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28629 && iVar1 < Global_262145.f_28650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28630 && iVar1 < Global_262145.f_28651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28631 && iVar1 < Global_262145.f_28652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28632 && iVar1 < Global_262145.f_28653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28633 && iVar1 < Global_262145.f_28654)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28656 && iVar1 < Global_262145.f_28657) && !Global_262145.f_28611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28659 && iVar1 < Global_262145.f_28660) && !Global_262145.f_28612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28664 && iVar1 < Global_262145.f_28667)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28665 && iVar1 < Global_262145.f_28668)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28666 && iVar1 < Global_262145.f_28669)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29682 && iVar1 < Global_262145.f_29347)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_29333 && iVar1 < Global_262145.f_29354)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29334 && iVar1 < Global_262145.f_29340)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29680 && iVar1 < Global_262145.f_29348)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29681 && iVar1 < Global_262145.f_29349)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29327 && iVar1 < Global_262145.f_29346)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29328 && iVar1 < Global_262145.f_29355)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29329 && iVar1 < Global_262145.f_29345)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29330 && iVar1 < Global_262145.f_29343)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29676 && iVar1 < Global_262145.f_29350)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29677 && iVar1 < Global_262145.f_29351)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29678 && iVar1 < Global_262145.f_29352)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29679 && iVar1 < Global_262145.f_29353)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29331 && iVar1 < Global_262145.f_29342)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29332 && iVar1 < Global_262145.f_29344)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30141 && iVar1 < Global_262145.f_30124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30142 && iVar1 < Global_262145.f_30125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30143 && iVar1 < Global_262145.f_30126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30144 && iVar1 < Global_262145.f_30127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30145 && iVar1 < Global_262145.f_30128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30146 && iVar1 < Global_262145.f_30129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30147 && iVar1 < Global_262145.f_30130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30148 && iVar1 < Global_262145.f_30131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30149 && iVar1 < Global_262145.f_30132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30158)
		{
		}
		else if (!Global_262145.f_30150 && iVar1 < Global_262145.f_30133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30151 && iVar1 < Global_262145.f_30134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30152 && iVar1 < Global_262145.f_30135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30153 && iVar1 < Global_262145.f_30136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30154 && iVar1 < Global_262145.f_30137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30159)
		{
		}
		else if (!Global_262145.f_30155 && iVar1 < Global_262145.f_30138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30156 && iVar1 < Global_262145.f_30139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30157 && iVar1 < Global_262145.f_30140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_31009 && iVar1 < Global_262145.f_30992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_31010 && iVar1 < Global_262145.f_30993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_31011 && iVar1 < Global_262145.f_30994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31012 && iVar1 < Global_262145.f_30995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31013 && iVar1 < Global_262145.f_30996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31014 && iVar1 < Global_262145.f_30997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31015 && iVar1 < Global_262145.f_30998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31016 && iVar1 < Global_262145.f_30999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31017 && iVar1 < Global_262145.f_31000)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31018 && iVar1 < Global_262145.f_31001)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31019 && iVar1 < Global_262145.f_31002)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31020 && iVar1 < Global_262145.f_31003)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31021 && iVar1 < Global_262145.f_31004)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31022 && iVar1 < Global_262145.f_31005)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31023 && iVar1 < Global_262145.f_31006)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31024 && iVar1 < Global_262145.f_31007)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31025 && iVar1 < Global_262145.f_31008)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("champion"))
	{
		if (!Global_262145.f_31889 && iVar1 < Global_262145.f_31874)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_31890 && iVar1 < Global_262145.f_31875)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deity"))
	{
		if (!Global_262145.f_31891 && iVar1 < Global_262145.f_31876)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_31892 && iVar1 < Global_262145.f_31877)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_31893 && iVar1 < Global_262145.f_31878)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_31894 && iVar1 < Global_262145.f_31879)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("astron"))
	{
		if (!Global_262145.f_31895 && iVar1 < Global_262145.f_31880)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_31896 && iVar1 < Global_262145.f_31881)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_31897 && iVar1 < Global_262145.f_31882)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("reever"))
	{
		if (!Global_262145.f_31898 && iVar1 < Global_262145.f_31883)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_31899 && iVar1 < Global_262145.f_31884)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_31900 && iVar1 < Global_262145.f_31885)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_31901 && iVar1 < Global_262145.f_31886)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_31902 && iVar1 < Global_262145.f_31887)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller7"))
	{
		if (Global_262145.f_31967)
		{
		}
		else if (!Global_262145.f_31903 && iVar1 < Global_262145.f_31888)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso3"))
	{
		if (!Global_262145.f_33131 && iVar1 < Global_262145.f_33112)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("corsita"))
	{
		if (!Global_262145.f_33125 && iVar1 < Global_262145.f_33106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("draugur"))
	{
		if (!Global_262145.f_33129 && iVar1 < Global_262145.f_33110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("greenwood"))
	{
		if (!Global_262145.f_33123 && iVar1 < Global_262145.f_33104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjosj"))
	{
		if (!Global_262145.f_33134 && iVar1 < Global_262145.f_33115)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lm87"))
	{
		if (!Global_262145.f_33126 && iVar1 < Global_262145.f_33107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("postlude"))
	{
		if (!Global_262145.f_33135 && iVar1 < Global_262145.f_33116)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rhinehart"))
	{
		if (!Global_262145.f_33137 && iVar1 < Global_262145.f_33118)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sm722"))
	{
		if (!Global_262145.f_33128 && iVar1 < Global_262145.f_33109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf"))
	{
		if (!Global_262145.f_33136 && iVar1 < Global_262145.f_33117)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf2"))
	{
		if (!Global_262145.f_33139 && iVar1 < Global_262145.f_33120)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero2"))
	{
		if (!Global_262145.f_33124 && iVar1 < Global_262145.f_33105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigero2"))
	{
		if (!Global_262145.f_33132 && iVar1 < Global_262145.f_33113)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil2"))
	{
		if (!Global_262145.f_33138 && iVar1 < Global_262145.f_33119)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner4"))
	{
		if (!Global_262145.f_33130 && iVar1 < Global_262145.f_33111)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel4"))
	{
		if (!Global_262145.f_33140 && iVar1 < Global_262145.f_33121)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("conada"))
	{
		if (!Global_262145.f_33127 && iVar1 < Global_262145.f_33108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnisegt"))
	{
		if (!Global_262145.f_33122 && iVar1 < Global_262145.f_33103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez3"))
	{
		if (!Global_262145.f_33962 && iVar1 < Global_262145.f_33946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brickade2"))
	{
		if (!Global_262145.f_33962 && iVar1 < Global_262145.f_33946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("eudora"))
	{
		if (!Global_262145.f_33971 && iVar1 < Global_262145.f_33954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("powersurge"))
	{
		if (!Global_262145.f_33965 && iVar1 < Global_262145.f_33949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("journey2"))
	{
		if (!Global_262145.f_33959 && iVar1 < Global_262145.f_33943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("surfer3"))
	{
		if (!Global_262145.f_33960 && iVar1 < Global_262145.f_33944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity3"))
	{
		if (!Global_262145.f_33957 && iVar1 < Global_262145.f_33941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("panthere"))
	{
		if (!Global_262145.f_33968 && iVar1 < Global_262145.f_33952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boor"))
	{
		if (!Global_262145.f_33972 && iVar1 < Global_262145.f_33956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon2"))
	{
		if (!Global_262145.f_33969 && iVar1 < Global_262145.f_33953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip2"))
	{
		if (!Global_262145.f_33958 && iVar1 < Global_262145.f_33942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("r300"))
	{
		if (!Global_262145.f_33961 && iVar1 < Global_262145.f_33945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virtue"))
	{
		if (!Global_262145.f_33970 && iVar1 < Global_262145.f_33955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi8"))
	{
		if (!Global_262145.f_33966 && iVar1 < Global_262145.f_33950)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("broadway"))
	{
		if (!Global_262145.f_33967 && iVar1 < Global_262145.f_33951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tahoma"))
	{
		if (!Global_262145.f_33964 && iVar1 < Global_262145.f_33948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taxi"))
	{
		if (!Global_262145.f_33963 && iVar1 < Global_262145.f_33947)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

var func_52()
{
	return (IS_ORBIS_VERSION() || IS_PROSPERO_VERSION());
}

var func_53()
{
	return (IS_DURANGO_VERSION() || IS_SCARLETT_VERSION());
}

int func_54()
{
	return 0;
}

int func_55()
{
	return 1;
}

int func_56()
{
	return 1;
}

int func_57()
{
	if (unk_0x87611B922B50F13(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_58()
{
	var uVar0;
	
	if (Global_152523 == 2)
	{
		return 1;
	}
	else if (Global_152523 == 3)
	{
		return 0;
	}
	if (NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				N_0X767FBC2AC802EF3D(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				SET_BIT(&uVar0, 2);
				SET_BIT(&uVar0, 4);
				SET_BIT(&uVar0, 6);
				SET_BIT(&Global_25, 2);
				SET_BIT(&Global_25, 4);
				SET_BIT(&Global_25, 6);
				N_0XB3271D7AB655B441(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (ARE_PROFILE_SETTINGS_VALID())
				{
					uVar0 = GET_PROFILE_SETTING(866);
					SET_BIT(&uVar0, false);
					N_0XDAC073C7901F9E15(uVar0);
				}
				return 1;
			}
		}
	}
	if (ARE_PROFILE_SETTINGS_VALID())
	{
		if (BitTest(GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = GET_ENTITY_MODEL(iParam0);
	uVar1 = GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && ARE_STRINGS_EQUAL(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_48(iVar0, 0, -1))
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (DOES_ENTITY_EXIST(Global_98042[iVar0]))
		{
			if (Global_98042[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_61(int iParam0)
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(iParam0) && IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (DOES_ENTITY_EXIST(Global_98012[iVar0]) && IS_VEHICLE_DRIVEABLE(Global_98012[iVar0], 0))
			{
				if (Global_98012[iVar0] == iParam0 && GET_ENTITY_MODEL(Global_98012[iVar0]) == GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(Global_77348.f_484[24]))
	{
		if (iParam0 == Global_77348.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (DOES_ENTITY_EXIST(Global_77348.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_77348.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_63(int iParam0)
{
	int iVar0;
	
	if (!DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (DOES_ENTITY_EXIST(Global_98012[iVar0]))
		{
			if (Global_98012[iVar0] == iParam0)
			{
				return Global_98022[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_64(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!DOES_ENTITY_EXIST(iParam0) || !IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_65(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113648.f_7231[iVar2], 0))
		{
			if (IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_65(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_66(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_68(iParam0, 0))
		{
			func_67(iParam0, 1, 0);
			func_67(iParam0, 2, 0);
			func_67(iParam0, 3, 0);
			func_67(iParam0, 4, 0);
			func_67(iParam0, 0, 1);
			Global_77348[iParam0] = 1;
		}
	}
	else
	{
		func_67(iParam0, 0, 0);
	}
}

void func_67(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		SET_BIT(&(Global_113648.f_32751[iParam0]), bParam1);
	}
	else
	{
		CLEAR_BIT(&(Global_113648.f_32751[iParam0]), bParam1);
	}
}

int func_68(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113648.f_32751[iParam0], iParam1);
}

void func_69(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_73(&(Global_77348.f_555[0 /*21*/]), iParam0))
	{
		if (DOES_ENTITY_EXIST(Global_77348.f_139[iParam0]))
		{
			bVar0 = true;
			if (!IS_PED_INJURED(()()))
			{
				if (IS_VEHICLE_DRIVEABLE(Global_77348.f_139[iParam0], 0))
				{
					if (IS_PED_IN_VEHICLE(()(), Global_77348.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				SET_ENTITY_AS_MISSION_ENTITY(Global_77348.f_139[iParam0], 1, 1);
				DELETE_VEHICLE(&(Global_77348.f_139[iParam0]));
			}
		}
		Global_77348[iParam0] = 1;
		if (BitTest(Global_77348.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_68(iParam0, 0)) && Global_78257.f_66 == 0) && Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14] != 0) && Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14] > 3) && (!func_71(0, Global_77348.f_555[0 /*21*/].f_12) || !func_71(1, Global_77348.f_555[0 /*21*/].f_12)))
			{
				func_70(&(Global_113648.f_32751.f_69[Global_77348.f_555[0 /*21*/].f_14 /*78*/]), &Global_78257);
				Global_78335 = Global_113648.f_32751.f_5591;
			}
			func_66(iParam0, 0);
		}
	}
}

void func_70(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_71(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_72(&(Global_113648.f_32751.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_48(Global_113648.f_32751.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0, -1);
}

int func_72(var uParam0)
{
	return *uParam0;
}

int func_73(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_74(0, 1);
			uParam0->f_12 = 0;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_74(0, 1);
			uParam0->f_12 = 0;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_74(1, 1);
			uParam0->f_12 = 1;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_74(1, 2);
			uParam0->f_12 = 1;
			SET_BIT(&(uParam0->f_9), 19);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_74(1, 1);
			uParam0->f_12 = 1;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_74(1, 2);
			uParam0->f_12 = 1;
			SET_BIT(&(uParam0->f_9), 19);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_74(2, 1);
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_74(2, 1);
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_74(2, 1);
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			SET_BIT(&(uParam0->f_9), false);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			SET_BIT(&(uParam0->f_9), false);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			SET_BIT(&(uParam0->f_9), false);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			SET_BIT(&(uParam0->f_9), false);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 22);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			SET_BIT(&(uParam0->f_9), false);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 22);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			SET_BIT(&(uParam0->f_9), false);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 22);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			SET_BIT(&(uParam0->f_9), false);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			SET_BIT(&(uParam0->f_9), false);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			SET_BIT(&(uParam0->f_9), false);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			SET_BIT(&(uParam0->f_9), false);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 24);
			SET_BIT(&(uParam0->f_9), 28);
			SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			SET_BIT(&(uParam0->f_9), false);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 24);
			SET_BIT(&(uParam0->f_9), 28);
			SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			SET_BIT(&(uParam0->f_9), false);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 24);
			SET_BIT(&(uParam0->f_9), 28);
			SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 27);
			SET_BIT(&(uParam0->f_9), 24);
			SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 27);
			SET_BIT(&(uParam0->f_9), 24);
			SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 27);
			SET_BIT(&(uParam0->f_9), 24);
			SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 11);
			SET_BIT(&(uParam0->f_9), 13);
			SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 11);
			SET_BIT(&(uParam0->f_9), 13);
			SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			SET_BIT(&(uParam0->f_9), 9);
			SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			SET_BIT(&(uParam0->f_9), 9);
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			SET_BIT(&(uParam0->f_9), 2);
			SET_BIT(&(uParam0->f_9), 30);
			SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			SET_BIT(&(uParam0->f_9), 2);
			SET_BIT(&(uParam0->f_9), 22);
			SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_58())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			SET_BIT(&(uParam0->f_9), 13);
			SET_BIT(&(uParam0->f_9), 2);
			SET_BIT(&(uParam0->f_9), true);
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_58())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			SET_BIT(&(uParam0->f_9), 13);
			SET_BIT(&(uParam0->f_9), 2);
			SET_BIT(&(uParam0->f_9), true);
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			SET_BIT(&(uParam0->f_9), false);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 6);
			SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			SET_BIT(&(uParam0->f_9), 30);
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			SET_BIT(&(uParam0->f_9), 30);
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (BitTest(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_113648.f_32751.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_112(Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_113648.f_32751.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_113648.f_32751.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!func_112(Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113648.f_2365.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_112(Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113648.f_2365.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_74(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_17(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_75(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_75(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113648.f_9087.f_99.f_58[128] && !Global_113648.f_9087.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113648.f_9087.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113648.f_9087.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((DOES_ENTITY_EXIST(Global_77348.f_484[iVar0]) && !IS_ENTITY_DEAD(Global_77348.f_484[iVar0], 0)) && IS_VEHICLE_DRIVEABLE(Global_77348.f_484[iVar0], 0))
		{
			GET_VEHICLE_COLOURS(iParam0, &iVar1, &iVar2);
			GET_VEHICLE_COLOURS(Global_77348.f_484[iVar0], &iVar3, &iVar4);
			if (((GET_ENTITY_MODEL(iParam0) == GET_ENTITY_MODEL(Global_77348.f_484[iVar0]) && GET_VEHICLE_LIVERY(iParam0) == GET_VEHICLE_LIVERY(Global_77348.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_77(int iParam0, struct<3> Param1, bool bParam2)
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_79(iParam0, Global_77348.f_139[38], 0))
			{
				func_69(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_79(iParam0, Global_77348.f_139[43], 1))
			{
				func_69(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = GET_PED_NEARBY_VEHICLES(()(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_79(iParam0, uVar1[iVar3], 1) && func_78(GET_ENTITY_COORDS(uVar1[iVar3], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam2 || func_112(Param1, 0f, 0f, 0f, 0)) || GET_DISTANCE_BETWEEN_COORDS(GET_ENTITY_COORDS(iParam0, 1), GET_ENTITY_COORDS(uVar1[iVar3], 1), 1) < 10f)
					{
						DELETE_VEHICLE(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar3++;
			}
			break;
		
		case joaat("luxor2"):
			if ((DOES_ENTITY_EXIST(Global_77348.f_484[14]) && IS_VEHICLE_DRIVEABLE(iParam0, 0)) && IS_VEHICLE_DRIVEABLE(Global_77348.f_484[14], 0))
			{
				if (GET_ENTITY_MODEL(Global_77348.f_484[14]) == joaat("luxor2") && GET_VEHICLE_LIVERY(iParam0) == GET_VEHICLE_LIVERY(Global_77348.f_484[14]))
				{
					func_69(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((DOES_ENTITY_EXIST(Global_77348.f_484[20]) && IS_VEHICLE_DRIVEABLE(iParam0, 0)) && IS_VEHICLE_DRIVEABLE(Global_77348.f_484[20], 0))
			{
				if (GET_ENTITY_MODEL(Global_77348.f_484[20]) == joaat("swift2") && GET_VEHICLE_LIVERY(iParam0) == GET_VEHICLE_LIVERY(Global_77348.f_484[20]))
				{
					func_69(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_78(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (ABSF((Param0.f_0 - Param1.f_0)) <= fParam2)
		{
			if (ABSF((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (ABSF((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (ABSF((Param0.f_0 - Param1.f_0)) <= fParam2)
	{
		if (ABSF((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

int func_79(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((DOES_ENTITY_EXIST(iParam1) && !IS_ENTITY_DEAD(iParam1, 0)) && IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		if (bParam2)
		{
			GET_VEHICLE_COLOURS(iParam0, &iVar0, &iVar1);
			GET_VEHICLE_COLOURS(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_80(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!DOES_ENTITY_EXIST(Global_98012[iVar0]))
		{
			Global_98012[iVar0] = iParam0;
			Global_98022[iVar0] = iParam1;
			Global_98032[iVar0] = GET_ENTITY_MODEL(iParam0);
			if (IS_THIS_MODEL_A_CAR(Global_98032[iVar0]))
			{
				Global_98060[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_98060[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (DOES_ENTITY_EXIST(Global_98012[iVar0]))
		{
			if (iParam0 == 145 || Global_98022[iVar0] == iParam0)
			{
				if (iParam1 == 0 || GET_ENTITY_MODEL(Global_98012[iVar0]) == func_74(iParam0, iParam1))
				{
					if (!IS_PED_IN_VEHICLE(()(), Global_98012[iVar0], 0))
					{
						SET_ENTITY_AS_MISSION_ENTITY(Global_98012[iVar0], 0, 1);
						DELETE_VEHICLE(&(Global_98012[iVar0]));
						Global_98022[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_82(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_102(iParam0))
		{
			if (GET_HASH_KEY(&(uParam1->f_1)) != 0)
			{
				SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
			{
				unk_0x5D3F682DDA06C20(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, func_42(iVar0 + 1)))
			{
			}
			else
			{
				SET_BIT(&(uParam1->f_77), func_42(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_42(iVar1 + 1)))
			{
			}
			else
			{
				SET_BIT(&(uParam1->f_77), func_42(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_42(iVar2)))
				{
				}
				else
				{
					SET_BIT(&(uParam1->f_77), func_42(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_42(iVar3)))
				{
				}
				else
				{
					SET_BIT(&(uParam1->f_77), func_42(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, func_42(iVar4)))
					{
					}
					else
					{
						SET_BIT(&(uParam1->f_77), func_42(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("surfer3"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, func_42(iVar5)))
				{
				}
				else
				{
					SET_BIT(&(uParam1->f_77), func_42(iVar5));
				}
				iVar5++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_42(4)))
			{
			}
			else
			{
				SET_BIT(&(uParam1->f_77), func_42(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (GET_VEHICLE_MOD(iParam0, 10) != 0)
			{
				SET_BIT(&(uParam1->f_77), false);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			SET_BIT(&(uParam1->f_77), func_42(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar6 = 1;
			while (iVar6 <= 2)
			{
				if (BitTest(uParam1->f_77, func_42(iVar6)))
				{
				}
				else
				{
					SET_BIT(&(uParam1->f_77), func_42(iVar6));
				}
				iVar6++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, 0);
			if (GET_VEHICLE_MOD(iParam0, 5) != -1)
			{
				SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, 1);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_100(uParam1->f_5) || func_100(uParam1->f_6))
			{
			}
			else
			{
				SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || func_99(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_98())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_44(uParam1->f_66))
		{
			SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			SET_VEHICLE_TYRES_CAN_BURST(iParam0, 0);
			SET_DRIFT_TYRES(iParam0, 0);
		}
		if (bParam2)
		{
			unk_0xB74F181ADFC39BF(iParam0, uParam1->f_70);
		}
		SET_VEHICLE_NEON_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		SET_VEHICLE_NEON_ENABLED(iParam0, 2, BitTest(uParam1->f_77, 28));
		SET_VEHICLE_NEON_ENABLED(iParam0, 3, BitTest(uParam1->f_77, 29));
		SET_VEHICLE_NEON_ENABLED(iParam0, 0, BitTest(uParam1->f_77, 30));
		SET_VEHICLE_NEON_ENABLED(iParam0, 1, BitTest(uParam1->f_77, 31));
		SET_VEHICLE_IS_STOLEN(iParam0, BitTest(uParam1->f_77, 10));
		if (GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			SET_VEHICLE_LIVERY(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!IS_THIS_MODEL_A_BICYCLE(GET_ENTITY_MODEL(iParam0)))
			{
				if (IS_THIS_MODEL_A_BIKE(GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_97(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_97(iParam0, uParam1->f_69);
				}
			}
		}
		if (IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				RAISE_CONVERTIBLE_ROOF(iParam0, 1);
			}
			else
			{
				LOWER_CONVERTIBLE_ROOF(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_89(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!IS_THIS_MODEL_A_HELI(uParam1->f_66) && !IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar7 = 0;
			while (iVar7 <= 11)
			{
				if (BitTest(uParam1->f_77, func_42(iVar7 + 1)))
				{
					if (!IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1))
					{
						SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, 0);
					}
				}
				else if (IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1))
				{
					SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, 1);
				}
				iVar7++;
			}
		}
		if ((GET_ENTITY_MODEL(iParam0) == joaat("sheava") || GET_ENTITY_MODEL(iParam0) == joaat("omnis")) || GET_ENTITY_MODEL(iParam0) == joaat("le7b"))
		{
			if (GET_VEHICLE_MOD(iParam0, 0) == -1)
			{
				SET_VEHICLE_EXTRA(iParam0, 1, 0);
			}
		}
		if (((func_83() && unk_0xC6FDED3EB75117(uParam1->f_66)) && GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !IS_VEHICLE_MODEL(iParam0, joaat("avenger")))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (BitTest(uParam1->f_77, 22))
				{
					CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_83()
{
	if ((((Global_4718592.f_104427 == 6 || Global_4718592.f_104427 == 7) || Global_4718592.f_104427 == 18) || Global_4718592.f_104427 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_87(7))
	{
		if (func_85(Global_2672505.f_4.f_16) || func_84(Global_2672505.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_84(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1890444[iVar0 /*129*/].f_77.f_51 != 0;
	}
	return 0;
}

int func_85(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_86(iParam0, 9);
	}
	return 0;
}

var func_86(int iParam0, int iParam1)
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

bool func_87(int iParam0)
{
	return func_88(&(Global_2672505.f_184), iParam0);
}

var func_88(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_89(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	SET_VEHICLE_MOD_KIT(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				TOGGLE_VEHICLE_MOD(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0, 255);
				}
				else
				{
					SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				TOGGLE_VEHICLE_MOD(*iParam0, iVar1, false);
			}
		}
		else if (GET_VEHICLE_MOD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			REMOVE_VEHICLE_MOD(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar1 == 23)
				{
					SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar1 == 24)
				{
					SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else if (func_95(*iParam0, iVar1, ((*uParam1)[iVar0] - 1)))
				{
				}
				else
				{
					SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_94(GET_ENTITY_MODEL(*iParam0), 1) && GET_VEHICLE_MOD(*iParam0, 24) != func_92(*iParam0, ((*uParam1)[38] - 1)))
	{
		SET_VEHICLE_MOD(*iParam0, 24, func_92(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_91(iParam0);
	if (func_90(*iParam0))
	{
		SET_VEHICLE_STRONG(*iParam0, 1);
		SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
	}
	return 1;
}

int func_90(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((DOES_ENTITY_EXIST(iParam0) && IS_VEHICLE_DRIVEABLE(iParam0, 0)) && GET_NUM_MOD_KITS(iParam0) > 0)
	{
		SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (GET_VEHICLE_MOD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, GET_MOD_TEXT_LABEL(iParam0, iVar1, GET_VEHICLE_MOD(iParam0, iVar1)), 32);
				iVar2 = GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == GET_HASH_KEY("MNU_CAGE") || iVar2 == GET_HASH_KEY("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_91(var uParam0)
{
	switch (GET_ENTITY_MODEL(*uParam0))
	{
		case joaat("starling"):
			if (GET_VEHICLE_MOD(*uParam0, 4) == 0)
			{
				SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			}
			else
			{
				REMOVE_VEHICLE_MOD(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			SET_VEHICLE_MOD(*uParam0, 24, 3, false);
			break;
		
		default:
			break;
	}
}

int func_92(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (DOES_ENTITY_EXIST(iParam0) && IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		switch (GET_ENTITY_MODEL(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = func_93(iParam0, 38) + 1;
		iVar1 = func_93(iParam0, 24) + 1;
		fVar2 = (to_float(iParam1 + 1) / to_float(iVar0));
		iVar3 = (floor((to_float(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_93(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((IS_MODEL_VALID(Global_152535) && IS_VEHICLE_MODEL(iParam0, Global_152535)) && Global_152536 == iParam1)
	{
		return Global_152537;
	}
	iVar0 = (GET_NUM_VEHICLE_MODS(iParam0, iParam1) - 1);
	while (iVar0 >= 0 && func_95(iParam0, iParam1, iVar0))
	{
		iVar0 = (iVar0 - 1);
	}
	return iVar0;
}

int func_94(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("tenf2"):
		case joaat("weevil2"):
		case joaat("brioso3"):
		case joaat("sentinel4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14734)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14735)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14733)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14736)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14738)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14737)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_19141)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_19143)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_19147)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_19144)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_19151)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_19149)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_19154)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_21100)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_21101)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

int func_95(var uParam0, int iParam1, int iParam2)
{
	if (!func_96() && IS_VEHICLE_MOD_GEN9_EXCLUSIVE(uParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_96()
{
	return 0;
}

void func_97(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (GET_NUM_MOD_KITS(iParam0) > 0)
	{
		SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = GET_VEHICLE_MOD(iParam0, 24);
		iVar1 = GET_VEHICLE_MOD_VARIATION(iParam0, 24);
		SET_VEHICLE_WHEEL_TYPE(iParam0, uParam1);
		if (GET_ENTITY_MODEL(iParam0) == joaat("tornado6") || GET_ENTITY_MODEL(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			REMOVE_VEHICLE_MOD(iParam0, 24);
		}
		else
		{
			SET_VEHICLE_MOD(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_98()
{
	return unk_0x87611B922B50F13(joaat("mpindependence"));
}

int func_99(int iParam0)
{
	var uVar0;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		if (IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					uVar0 = DECOR_GET_INT(iParam0, "MPBitset");
				}
				return BitTest(uVar0, 4);
			}
		}
	}
	return 0;
}

int func_100(int iParam0)
{
	if (!func_96() && func_101(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0)
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return 1;
			break;
	}
	return 0;
}

int func_102(int iParam0)
{
	if (IS_PED_IN_ANY_VEHICLE(()(), 0))
	{
		if (!func_108(()(), -1))
		{
			iParam0 = GET_VEHICLE_PED_IS_IN(()(), 0);
		}
	}
	if (!DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (IS_ENTITY_DEAD(iParam0, 0))
	{
		return 0;
	}
	if (!IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	if (func_104(()()) == 3)
	{
		if (DOES_ENTITY_EXIST(iParam0) && IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (func_103(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_103(int iParam0)
{
	if (DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3))
	{
		if (DECOR_EXIST_ON(iParam0, "FMDeliverableID"))
		{
			return DECOR_GET_INT(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_104(int iParam0)
{
	if (func_107(iParam0) == 233)
	{
		return func_105(iParam0);
	}
	return -1;
}

int func_105(int iParam0)
{
	if (func_106(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_182;
	}
	return -1;
}

int func_106(int iParam0, int iParam1)
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_107(int iParam0)
{
	if (func_106(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_33;
	}
	return -1;
}

int func_108(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_109(iParam0, 1, 1))
	{
		if (IS_PED_IN_ANY_VEHICLE(GET_PLAYER_PED(iParam0), 0))
		{
			iVar0 = GET_VEHICLE_PED_IS_IN(GET_PLAYER_PED(iParam0), 0);
			if (IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (()() == GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_109(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672505.f_3)
				{
					return Global_2672505.f_2;
				}
				else if (Global_2657589[iVar0 /*466*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_110(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_73(&(Global_77348.f_555[0 /*21*/]), iVar0))
		{
			if (GET_DISTANCE_BETWEEN_COORDS(Param0, Global_77348.f_555[0 /*21*/], iParam2) <= fParam1)
			{
				func_69(iVar0);
			}
		}
		iVar0++;
	}
}

int func_111(var uParam0)
{
	if (func_113(uParam0))
	{
		if (HAS_MODEL_LOADED(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_112(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_113(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_48(uParam0->f_12.f_66, 0, -1))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_78(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_114()
{
	return func_111(&(Global_104212.f_2890));
}

void func_115()
{
	func_116(&(Global_104212.f_2890));
}

void func_116(var uParam0)
{
	if (func_113(uParam0))
	{
		REQUEST_MODEL(uParam0->f_12.f_66);
	}
}

int func_117(struct<3> Param0, int iParam1)
{
	return func_118(Global_104212.f_2890.f_12.f_66, Param0, iParam1);
}

int func_118(int iParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam2 == 1)
	{
		Param1 = { func_119() };
	}
	GET_MODEL_DIMENSIONS(iParam0, &Var0, &Var1);
	if ((Var1.f_0 - Var0.f_0) > Param1.f_0)
	{
		return 0;
	}
	else if ((Var1.f_1 - Var0.f_1) > Param1.f_1)
	{
		return 0;
	}
	else if ((Var1.f_2 - Var0.f_2) > Param1.f_2)
	{
		return 0;
	}
	return 1;
}

Vector3 func_119()
{
	return 2.55f, 5.665f, 2.55f;
}

int func_120()
{
	return func_113(&(Global_104212.f_2890));
}

void func_121()
{
	REQUEST_MODEL(joaat("armytrailer2"));
	REQUEST_MODEL(joaat("packer"));
	REQUEST_MODEL(joaat("s_m_y_construct_01"));
	REQUEST_MODEL(joaat("s_m_m_security_01"));
	REQUEST_MODEL(joaat("bison2"));
	while ((((!HAS_MODEL_LOADED(joaat("armytrailer2")) || !HAS_MODEL_LOADED(joaat("packer"))) || !HAS_MODEL_LOADED(joaat("s_m_y_construct_01"))) || !HAS_MODEL_LOADED(joaat("s_m_m_security_01"))) || !HAS_MODEL_LOADED(joaat("bison2")))
	{
		wait(0);
	}
	if (!DOES_ENTITY_EXIST(iLocal_32))
	{
		if (DOES_ENTITY_EXIST(Global_97178[1]))
		{
			SET_ENTITY_AS_MISSION_ENTITY(Global_97178[1], 1, 1);
			iLocal_32 = Global_97178[1];
			ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_32);
		}
		else
		{
			iLocal_32 = CREATE_VEHICLE(joaat("armytrailer2"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1, 0);
			ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_32);
		}
	}
	if (!DOES_ENTITY_EXIST(iLocal_33))
	{
		if (DOES_ENTITY_EXIST(Global_97178[2]))
		{
			SET_ENTITY_AS_MISSION_ENTITY(Global_97178[2], 1, 1);
			iLocal_33 = Global_97178[2];
			SET_VEHICLE_HAS_STRONG_AXLES(iLocal_33, 1);
			unk_0xB74F181ADFC39BF(iLocal_33, 7);
			func_124(iLocal_33, -1);
			func_123(iLocal_33, -1);
		}
		else
		{
			iLocal_33 = CREATE_VEHICLE(joaat("packer"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1, 0);
			SET_VEHICLE_HAS_STRONG_AXLES(iLocal_33, 1);
			unk_0xB74F181ADFC39BF(iLocal_33, 7);
			func_124(iLocal_33, -1);
			func_123(iLocal_33, -1);
		}
	}
	ATTACH_VEHICLE_TO_TRAILER(iLocal_33, iLocal_32, 0.5f);
	SET_MODEL_AS_NO_LONGER_NEEDED(joaat("armytrailer2"));
	SET_MODEL_AS_NO_LONGER_NEEDED(joaat("packer"));
	SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bison2"));
	if (!DOES_ENTITY_EXIST(iLocal_35[0]))
	{
		if (DOES_ENTITY_EXIST(Global_97178.f_9[0]))
		{
			SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[0], 1, 1);
			iLocal_35[0] = Global_97178.f_9[0];
			SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[0], iLocal_264);
			func_122(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[0], 1);
		}
		else
		{
			iLocal_35[0] = CREATE_PED(26, joaat("s_m_y_construct_01"), 912.34f, -1543.297f, 29.6469f, 16.169f, 1, 1);
			SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[0], iLocal_264);
			if (DOES_SCENARIO_EXIST_IN_AREA(912.3f, -1542.6f, 30.4f, 3f, 0))
			{
				TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_35[0], 912.3f, -1542.6f, 30.4f, 5f, 0);
			}
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[0], 1);
			func_122(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		}
	}
	if (!DOES_ENTITY_EXIST(iLocal_35[1]))
	{
		if (DOES_ENTITY_EXIST(Global_97178.f_9[1]))
		{
			SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[1], 1, 1);
			iLocal_35[1] = Global_97178.f_9[1];
			SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[1], iLocal_264);
			func_122(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[1], 1);
		}
		else
		{
			iLocal_35[1] = CREATE_PED(26, joaat("s_m_y_construct_01"), 917.5028f, -1517.401f, 29.9673f, 158.5738f, 1, 1);
			SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[1], iLocal_264);
			if (DOES_SCENARIO_EXIST_IN_AREA(917.5028f, -1517.401f, 29.9673f, 3f, 0))
			{
				TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_35[1], 917.5028f, -1517.401f, 29.9673f, 5f, 0);
			}
			func_122(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[1], 1);
		}
	}
	if (!DOES_ENTITY_EXIST(iLocal_35[2]))
	{
		if (DOES_ENTITY_EXIST(Global_97178.f_9[2]))
		{
			SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[2], 1, 1);
			iLocal_35[2] = Global_97178.f_9[2];
			SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[2], iLocal_264);
			func_122(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[2], 1);
		}
		else
		{
			iLocal_35[2] = CREATE_PED(26, joaat("s_m_y_construct_01"), 869.6423f, -1541.423f, 29.2516f, 346.9848f, 1, 1);
			SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[2], iLocal_264);
			if (DOES_SCENARIO_EXIST_IN_AREA(869.6423f, -1541.423f, 29.2516f, 3f, 0))
			{
				TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_35[2], 869.6423f, -1541.423f, 29.2516f, 5f, 0);
			}
			func_122(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[2], 1);
		}
	}
	if (!DOES_ENTITY_EXIST(iLocal_35[3]))
	{
		if (DOES_ENTITY_EXIST(Global_97178.f_9[3]))
		{
			SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[3], 1, 1);
			iLocal_35[3] = Global_97178.f_9[3];
			SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[3], iLocal_264);
			func_122(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[3], 1);
		}
		else
		{
			iLocal_35[3] = CREATE_PED(26, joaat("s_m_y_construct_01"), 884.3046f, -1573.188f, 29.8247f, 182.9722f, 1, 1);
			SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[3], iLocal_264);
			if (DOES_SCENARIO_EXIST_IN_AREA(884.3046f, -1573.188f, 29.8247f, 3f, 0))
			{
				TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_35[3], 884.3046f, -1573.188f, 29.8247f, 5f, 0);
			}
			func_122(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[3], 1);
		}
	}
	if (!DOES_ENTITY_EXIST(iLocal_35[4]))
	{
		if (DOES_ENTITY_EXIST(Global_97178.f_9[4]))
		{
			SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[4], 1, 1);
			iLocal_35[4] = Global_97178.f_9[4];
			SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[4], iLocal_264);
			func_122(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[4], 1);
		}
		else
		{
			iLocal_35[4] = CREATE_PED(26, joaat("s_m_y_construct_01"), 903.8805f, -1575.02f, 29.8327f, 308.1952f, 1, 1);
			SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[4], iLocal_264);
			if (DOES_SCENARIO_EXIST_IN_AREA(903.8805f, -1575.02f, 29.8327f, 3f, 0))
			{
				TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_35[4], 903.8805f, -1575.02f, 29.8327f, 5f, 0);
			}
			func_122(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[4], 1);
		}
	}
	if (!DOES_ENTITY_EXIST(iLocal_35[5]))
	{
		if (DOES_ENTITY_EXIST(Global_97178.f_9[5]))
		{
			SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[5], 1, 1);
			iLocal_35[5] = Global_97178.f_9[5];
			SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[5], iLocal_264);
			func_122(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[5], 1);
		}
		else
		{
			iLocal_35[5] = CREATE_PED(26, joaat("s_m_y_construct_01"), 906.2186f, -1575.108f, 29.8125f, 55.9906f, 1, 1);
			SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[5], iLocal_264);
			if (DOES_SCENARIO_EXIST_IN_AREA(906.2186f, -1575.108f, 29.8125f, 3f, 0))
			{
				TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_35[5], 906.2186f, -1575.108f, 29.8125f, 5f, 0);
			}
			func_122(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[5], 1);
		}
	}
	if (!DOES_ENTITY_EXIST(iLocal_35[6]))
	{
		if (DOES_ENTITY_EXIST(Global_97178.f_9[8]))
		{
			SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[8], 1, 1);
			iLocal_35[6] = Global_97178.f_9[8];
			SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[6], iLocal_264);
			func_122(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[6], 1);
		}
		else
		{
			iLocal_35[6] = CREATE_PED(26, joaat("s_m_y_construct_01"), 889.285f, -1561.485f, 29.6539f, 22.2456f, 1, 1);
			SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[6], iLocal_264);
			if (DOES_SCENARIO_EXIST_IN_AREA(889.285f, -1561.485f, 29.6539f, 3f, 0))
			{
				TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_35[6], 889.285f, -1561.485f, 29.6539f, 5f, 0);
			}
			func_122(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[6], 1);
		}
	}
	if (!DOES_ENTITY_EXIST(iLocal_36[0]))
	{
		if (DOES_ENTITY_EXIST(Global_97178.f_9[6]))
		{
			SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[6], 1, 1);
			iLocal_36[0] = Global_97178.f_9[6];
			SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_36[0], iLocal_265);
			func_122(iLocal_36[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_36[0], 1);
			GIVE_WEAPON_TO_PED(iLocal_36[0], joaat("weapon_pistol"), 100, 0, 0);
			N_0X6C8065A3B780185B(iLocal_36[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
		else
		{
			iLocal_36[0] = CREATE_PED(26, joaat("s_m_m_security_01"), 863.1551f, -1564.572f, 29.3231f, 130.7946f, 1, 1);
			SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_36[0], iLocal_265);
			func_122(iLocal_36[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_36[0], 1);
			GIVE_WEAPON_TO_PED(iLocal_36[0], joaat("weapon_pistol"), 100, 0, 0);
			N_0X6C8065A3B780185B(iLocal_36[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
	}
	if (!DOES_ENTITY_EXIST(iLocal_36[1]))
	{
		if (DOES_ENTITY_EXIST(Global_97178.f_9[7]))
		{
			SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[7], 1, 1);
			iLocal_36[1] = Global_97178.f_9[7];
			SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_36[1], iLocal_265);
			func_122(iLocal_36[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_36[1], 1);
			GIVE_WEAPON_TO_PED(iLocal_36[1], joaat("weapon_pistol"), 100, 0, 0);
			N_0X6C8065A3B780185B(iLocal_36[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
		else
		{
			iLocal_36[1] = CREATE_PED(26, joaat("s_m_m_security_01"), 940.2881f, -1573.877f, 29.3866f, 269.1856f, 1, 1);
			SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_36[1], iLocal_265);
			func_122(iLocal_36[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_36[1], 1);
			GIVE_WEAPON_TO_PED(iLocal_36[1], joaat("weapon_pistol"), 100, 0, 0);
			N_0X6C8065A3B780185B(iLocal_36[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
	}
	SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_construct_01"));
	SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
}

void func_122(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5)
{
	if (!IS_PED_INJURED(iParam0))
	{
		SET_PED_SEEING_RANGE(iParam0, fParam1);
		SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, iParam2);
		SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam0, (fParam3 / 2f));
		SET_PED_VISUAL_FIELD_MIN_ANGLE(iParam0, iParam4);
		SET_PED_VISUAL_FIELD_MAX_ANGLE(iParam0, iParam5);
	}
}

void func_123(int iParam0, int iParam1)
{
	Global_63373 = iParam0;
	Global_63374 = iParam1;
}

void func_124(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_63375 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_75457)
	{
		if (iParam1 == -1 || Global_75458[iVar0 /*9*/] == iParam1)
		{
			if (Global_75458[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_75458[iVar0 /*9*/].f_6 = iParam0;
				Global_75458[iVar0 /*9*/].f_7 = 1;
				Global_75458[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_125()
{
	iLocal_54 = 0;
	while (iLocal_54 <= 6)
	{
		if (DOES_ENTITY_EXIST(iLocal_35[iLocal_54]) && DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_35[iLocal_54], 1))
		{
			DELETE_PED(&(iLocal_35[iLocal_54]));
		}
		iLocal_54++;
	}
	if (DOES_ENTITY_EXIST(iLocal_36[0]) && DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_36[0], 1))
	{
		DELETE_PED(&(iLocal_36[0]));
	}
	if (DOES_ENTITY_EXIST(iLocal_36[1]) && DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_36[1], 1))
	{
		DELETE_PED(&(iLocal_36[1]));
	}
	if (DOES_ENTITY_EXIST(iLocal_37) && DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_37, 1))
	{
		DELETE_PED(&iLocal_37);
	}
	if (DOES_ENTITY_EXIST(iLocal_38) && DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_38, 1))
	{
		DELETE_PED(&iLocal_38);
	}
	if (DOES_ENTITY_EXIST(iLocal_39) && DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_39, 1))
	{
		DELETE_PED(&iLocal_39);
	}
	if (DOES_ENTITY_EXIST(iLocal_40) && DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_40, 1))
	{
		DELETE_PED(&iLocal_40);
	}
	if (!func_31())
	{
		SET_ENTITY_COORDS(()(), 519.1906f, -2980.994f, 5.0443f, 1, 0, 0, 1);
		SET_ENTITY_HEADING(()(), 270.1911f);
	}
	if (DOES_ENTITY_EXIST(iLocal_32) && DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_32, 1))
	{
		DELETE_VEHICLE(&iLocal_32);
	}
	if (DOES_ENTITY_EXIST(Global_97178[3]))
	{
		SET_ENTITY_AS_MISSION_ENTITY(Global_97178[3], 1, 0);
		DELETE_VEHICLE(&(Global_97178[3]));
	}
	if (DOES_ENTITY_EXIST(iLocal_33) && DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_33, 1))
	{
		DELETE_VEHICLE(&iLocal_33);
	}
	REMOVE_ANIM_DICT("cellphone@str");
	REMOVE_ANIM_DICT("misscarsteal4@director_grip");
	N_0X5B17A90291133DA5("FHPRB_START");
	N_0X5B17A90291133DA5("FHPRB_TRUCK");
	N_0X5B17A90291133DA5("FHPRB_COPS");
	N_0X5B17A90291133DA5("FHPRB_LOST");
	N_0X5B17A90291133DA5("FHPRB_STOP");
	CLEAR_AREA(889.5f, -1553.8f, 30f, 150f, 1, 0, 0, 0);
}

void func_126()
{
	if (DOES_BLIP_EXIST(uLocal_49))
	{
		REMOVE_BLIP(&uLocal_49);
	}
	if (DOES_BLIP_EXIST(uLocal_50))
	{
		REMOVE_BLIP(&uLocal_50);
	}
	if (DOES_BLIP_EXIST(uLocal_51))
	{
		REMOVE_BLIP(&uLocal_51);
	}
	if (DOES_BLIP_EXIST(uLocal_52))
	{
		REMOVE_BLIP(&uLocal_52);
	}
}

void func_127()
{
	Global_20591 = 0;
	func_128();
}

void func_128()
{
	N_0X9AEB285D1818C9AC();
	Global_22736 = 0;
	if ((N_0X7497D2CE2C30D24C() || Global_20383.f_1 == 9) || Global_20382 == 1)
	{
		unk_0xF15249D24BC5ADA(0);
		Global_21725 = 6;
		Global_20383.f_1 = 3;
		return;
	}
	if (N_0X16754C556D2EDE3D())
	{
		unk_0xF15249D24BC5ADA(1);
		Global_21725 = 6;
		return;
	}
}

void func_129()
{
	func_151();
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_35();
			iLocal_266 = 0;
		}
		iLocal_267 = 0;
		iLocal_269 = 0;
		iLocal_346 = 0;
		iLocal_85 = 0;
		iLocal_86 = 0;
		SET_MAX_WANTED_LEVEL(5);
		REMOVE_ANIM_DICT("cellphone@str");
		REMOVE_ANIM_DICT("misscarsteal4@director_grip");
		if (!IS_SCREEN_FADED_IN())
		{
			LOAD_SCENE(GET_ENTITY_COORDS(()(), 1));
			DO_SCREEN_FADE_IN(800);
		}
		SET_WANTED_LEVEL_MULTIPLIER(1f);
		REPLAY_RECORD_BACK_FOR_TIME(10f, 5f, 4);
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		func_150(&uLocal_99, 3, 0, "LESTER", 0, 1);
		if (func_14() == 0)
		{
			func_150(&uLocal_99, 0, ()(), "MICHAEL", 0, 1);
		}
		if (func_14() == 1)
		{
			func_150(&uLocal_99, 1, ()(), "FRANKLIN", 0, 1);
		}
		if (func_14() == 2)
		{
			func_150(&uLocal_99, 2, ()(), "TREVOR", 0, 1);
		}
		iLocal_53 = 2;
	}
	if (iLocal_53 == 2)
	{
		if (GET_PLAYER_WANTED_LEVEL(()()) == 0)
		{
			if (func_14() == 0)
			{
				if (func_136(&uLocal_99, 12, "FHPBAUD", "FHPB_CHAT1", 7, 1, 0, 0, 0))
				{
					REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
					settimera(0);
					iLocal_53 = 3;
				}
			}
			if (func_14() == 1)
			{
				if (func_136(&uLocal_99, 12, "FHPBAUD", "FHPB_CHAT3", 7, 1, 0, 0, 0))
				{
					REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
					settimera(0);
					iLocal_53 = 3;
				}
			}
			if (func_14() == 2)
			{
				if (func_136(&uLocal_99, 12, "FHPBAUD", "FHPB_CHAT2", 7, 1, 0, 0, 0))
				{
					REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
					settimera(0);
					iLocal_53 = 3;
				}
			}
		}
	}
	if (iLocal_53 == 3)
	{
		if (!DOES_BLIP_EXIST(uLocal_50))
		{
			if (!func_135())
			{
				if (timera() > 10500)
				{
					uLocal_50 = func_133(Local_92, 1);
				}
			}
		}
		if (func_135())
		{
			iLocal_53 = 4;
		}
	}
	if (iLocal_53 == 4)
	{
		if (GET_PLAYER_WANTED_LEVEL(()()) == 0)
		{
			if (IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
			{
				if (IS_PED_IN_VEHICLE(()(), iLocal_33, 0))
				{
					if (IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_33))
					{
						if (IS_ENTITY_AT_COORD(()(), Local_92, 4f, 4f, 2f, 1, 1, 2))
						{
							if (func_131(GET_VEHICLE_PED_IS_IN(()(), 0), 4f, 3, 0.5f, 0, 1, 0))
							{
								N_0X706D57B0F50DA710("FHPRB_STOP");
								if (DOES_BLIP_EXIST(uLocal_50))
								{
									REMOVE_BLIP(&uLocal_50);
								}
								REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
								func_130(0, -1);
								iLocal_53 = 0;
								iLocal_28 = 5;
							}
						}
					}
				}
			}
		}
	}
}

void func_130(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_63370)
	{
	}
	Global_63370 = 0;
	if (bParam0)
	{
		Global_63371 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_75457)
		{
			if (Global_63587[Global_75458[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_75458[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_75457)
		{
			if (Global_75458[iVar0 /*9*/] > 0)
			{
				if (Global_75458[iVar0 /*9*/] == iParam1)
				{
					Global_75458[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

int func_131(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	DISABLE_CONTROL_ACTION(0, 71, 1);
	DISABLE_CONTROL_ACTION(0, 72, 1);
	DISABLE_CONTROL_ACTION(0, 76, 1);
	DISABLE_CONTROL_ACTION(0, 73, 1);
	DISABLE_CONTROL_ACTION(0, 59, 1);
	DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!bParam6)
	{
		DISABLE_CONTROL_ACTION(0, 69, 1);
		DISABLE_CONTROL_ACTION(0, 70, 1);
		DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	DISABLE_CONTROL_ACTION(0, 74, 1);
	DISABLE_CONTROL_ACTION(0, 86, 1);
	DISABLE_CONTROL_ACTION(0, 81, 1);
	DISABLE_CONTROL_ACTION(0, 82, 1);
	DISABLE_CONTROL_ACTION(0, 138, 1);
	DISABLE_CONTROL_ACTION(0, 136, 1);
	DISABLE_CONTROL_ACTION(0, 114, 1);
	DISABLE_CONTROL_ACTION(0, 107, 1);
	DISABLE_CONTROL_ACTION(0, 110, 1);
	DISABLE_CONTROL_ACTION(0, 89, 1);
	DISABLE_CONTROL_ACTION(0, 89, 1);
	DISABLE_CONTROL_ACTION(0, 87, 1);
	DISABLE_CONTROL_ACTION(0, 88, 1);
	DISABLE_CONTROL_ACTION(0, 113, 1);
	DISABLE_CONTROL_ACTION(0, 115, 1);
	DISABLE_CONTROL_ACTION(0, 116, 1);
	DISABLE_CONTROL_ACTION(0, 117, 1);
	DISABLE_CONTROL_ACTION(0, 118, 1);
	DISABLE_CONTROL_ACTION(0, 119, 1);
	DISABLE_CONTROL_ACTION(0, 352, 1);
	DISABLE_CONTROL_ACTION(0, 131, 1);
	DISABLE_CONTROL_ACTION(0, 132, 1);
	DISABLE_CONTROL_ACTION(0, 123, 1);
	DISABLE_CONTROL_ACTION(0, 126, 1);
	DISABLE_CONTROL_ACTION(0, 129, 1);
	DISABLE_CONTROL_ACTION(0, 130, 1);
	DISABLE_CONTROL_ACTION(0, 133, 1);
	DISABLE_CONTROL_ACTION(0, 134, 1);
	DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
	func_132(iParam0);
	if ((GET_GAME_TIMER() - Global_29) > 500)
	{
		BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = GET_GAME_TIMER();
	if (!IS_ENTITY_DEAD(iParam0, 0))
	{
		if (ABSF(GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_132(int iParam0)
{
	if (!IS_ENTITY_DEAD(iParam0, 0))
	{
		if (GET_HAS_ROCKET_BOOST(iParam0))
		{
			if (IS_ROCKET_BOOST_ACTIVE(iParam0))
			{
				SET_ROCKET_BOOST_ACTIVE(iParam0, 0);
			}
		}
	}
}

var func_133(struct<3> Param0, int iParam1)
{
	var uVar0;
	
	uVar0 = ADD_BLIP_FOR_COORD(Param0);
	SET_BLIP_SCALE(uVar0, func_134(NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	SET_BLIP_ROUTE(uVar0, iParam1);
	return uVar0;
}

float func_134(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_135()
{
	if (Global_21725 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_136(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_149(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21773 = 0;
	Global_21732 = 1;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_21730 = 0;
	Global_21777 = 0;
	Global_21779 = 0;
	if (iParam5 == 1)
	{
		Global_21737 = 1;
	}
	else
	{
		Global_21737 = 0;
	}
	Global_2883585 = 0;
	return func_137(sParam3, iParam4, bParam8);
}

int func_137(char* sParam0, int iParam1, bool bParam2)
{
	Global_21726 = 0;
	if (Global_21725 == 0 || Global_21727 == 2)
	{
		if (Global_21725 != 0)
		{
			if (iParam1 > Global_21727)
			{
				if (Global_21732 == 0)
				{
					unk_0xF15249D24BC5ADA(0);
					Global_20383.f_1 = 3;
					Global_21725 = 0;
					Global_21726 = 1;
					Global_21778 = 0;
					Global_21721 = 0;
					Global_21722 = 0;
					Global_21736 = 0;
					Global_21735 = 0;
					Global_20382 = 0;
				}
				else
				{
					func_128();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (N_0X16754C556D2EDE3D())
		{
			return 0;
		}
		if (func_148(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_147();
		Global_21014 = { Global_21179 };
		Global_21731 = Global_21732;
		Global_21738 = Global_21739;
		Global_2883586 = Global_2883585;
		Global_21740 = { Global_21756 };
		Global_21733 = Global_21734;
		Global_22715 = Global_22716;
		Global_22723 = { Global_22729 };
		Global_22717 = Global_22718;
		Global_22719 = Global_22720;
		Global_22721 = Global_22722;
		Global_21344.f_370 = Global_22714;
		Global_21344.f_368 = Global_22712;
		Global_21344.f_369 = Global_22713;
		Global_21721 = Global_21722;
		if (Global_21731)
		{
			CLEAR_BIT(&Global_8253, 20);
			CLEAR_BIT(&Global_8254, 17);
			CLEAR_BIT(&Global_8255, false);
			if (bParam2)
			{
				func_146();
				if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20383.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20349 == 1)
			{
				return 0;
			}
			if (IS_PLAYER_PLAYING(()()))
			{
				if (IS_PED_IN_MELEE_COMBAT(()()))
				{
					return 0;
				}
				if (func_145())
				{
					return 0;
				}
				if (IS_PED_SPRINTING(()()))
				{
					return 0;
				}
				if (IS_PED_RAGDOLL(()()))
				{
					return 0;
				}
				if (IS_PED_IN_PARACHUTE_FREE_FALL(()()))
				{
					return 0;
				}
				if (unk_0x8DAD6B08438A17C(()(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78558)
				{
					if (IS_ENTITY_IN_WATER(()()))
					{
						return 0;
					}
					if (IS_PLAYER_CLIMBING(()()))
					{
						return 0;
					}
					if (IS_PED_PLANTING_BOMB(()()))
					{
						return 0;
					}
					if (IS_SPECIAL_ABILITY_ACTIVE(()(), 0))
					{
						return 0;
					}
				}
			}
			if (func_144())
			{
				return 0;
			}
			else
			{
				switch (Global_20383.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8253, 9))
				{
					return 0;
				}
			}
			func_143();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_142();
		func_138();
		return 1;
	}
	if (Global_21725 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21727 || iParam1 == Global_21727)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_128();
	}
	return 0;
}

void func_138()
{
	if (!func_139())
	{
		return;
	}
	if (Global_21731)
	{
		MemCopy(&(Global_1977511.f_1), {Global_21344}, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}
}

int func_139()
{
	if (!Global_262145.f_28878)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (()() == func_141())
	{
		return 0;
	}
	if (func_140(()()))
	{
		return 0;
	}
	if (BitTest(Global_1894573[()() /*608*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_140(int iParam0)
{
	return func_86(iParam0, 20);
}

int func_141()
{
	return -1;
}

void func_142()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xF15249D24BC5ADA(0);
	Global_21725 = 1;
}

void func_143()
{
	Global_21778 = Global_21777;
	Global_21772 = Global_21773;
	Global_21819 = { Global_21807 };
	Global_21825 = { Global_21813 };
	Global_21780 = Global_21779;
	Global_21849 = { Global_21831 };
	Global_21855 = { Global_21837 };
	Global_21861 = { Global_21843 };
	Global_21867 = { Global_21873 };
	Global_7568 = Global_7569;
	Global_7570 = Global_7571;
	Global_21736 = Global_21737;
	Global_21738 = Global_21739;
	Global_21740 = { Global_21756 };
	Global_21729 = Global_21730;
	Global_22741 = 0;
	Global_21774 = 0;
	Global_21775 = 0;
	CLEAR_BIT(&Global_8254, 16);
}

int func_144()
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_145()
{
	int iVar0;
	int iVar1;
	
	if (Global_78558)
	{
		iVar0 = 0;
		GET_CURRENT_PED_WEAPON(()(), &iVar1, 1);
		if (IS_PLAYER_PLAYING(()()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (IS_PLAYER_PLAYING(()()))
	{
		if (GET_PED_CONFIG_FLAG(()(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_146()
{
	if (func_16(14))
	{
		if (!IS_ENTITY_DEAD(()(), 0))
		{
			if (GET_ENTITY_MODEL(()()) == Global_113648.f_28052[0 /*29*/])
			{
				Global_20383 = 0;
			}
			else if (GET_ENTITY_MODEL(()()) == Global_113648.f_28052[1 /*29*/])
			{
				Global_20383 = 1;
			}
			else if (GET_ENTITY_MODEL(()()) == Global_113648.f_28052[2 /*29*/])
			{
				Global_20383 = 2;
			}
			else
			{
				Global_20383 = 0;
			}
		}
	}
	else
	{
		Global_20383 = func_14();
		if (Global_20383 == 145)
		{
			Global_20383 = 3;
		}
		if (Global_78558)
		{
			Global_20383 = 3;
		}
		if (Global_20383 > 3)
		{
			Global_20383 = 3;
		}
	}
}

void func_147()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21014[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21014[iVar0 /*10*/].f_1), "", 24);
		Global_21014[iVar0 /*10*/].f_7 = 0;
		Global_21014[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21014.f_161 = -99;
	Global_21014.f_162 = { 0f, 0f, 0f };
}

bool func_148(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1653913.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1653913.f_1048, iParam0);
}

void func_149(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21179 = { *uParam0 };
	Global_7569 = iParam1;
	StringCopy(&Global_21795, sParam2, 24);
	Global_22714 = iParam5;
	if (iParam3 == 0)
	{
		Global_22712 = 1;
		Global_22710 = 0;
	}
	else
	{
		Global_22712 = 0;
		Global_22710 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22713 = 1;
		Global_22711 = 0;
	}
	else
	{
		Global_22713 = 0;
		Global_22711 = 1;
	}
}

void func_150(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78558)
	{
		if (!IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

void func_151()
{
	if (IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
	{
		if (IS_PED_IN_VEHICLE(()(), iLocal_33, 0))
		{
			if (IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_33))
			{
				if (func_156("HELP_1"))
				{
					CLEAR_HELP(1);
				}
				if (DOES_BLIP_EXIST(uLocal_49))
				{
					REMOVE_BLIP(&uLocal_49);
				}
				if (DOES_BLIP_EXIST(uLocal_52))
				{
					if (iLocal_294 == 1)
					{
						if (GET_GAME_TIMER() < iLocal_85 + 7500)
						{
							CLEAR_PRINTS();
						}
					}
					REMOVE_BLIP(&uLocal_52);
				}
				if (iLocal_28 == 4)
				{
					if (GET_PLAYER_WANTED_LEVEL(()()) == 0)
					{
						if (iLocal_346 == 0)
						{
							N_0X5B17A90291133DA5("FHPRB_COPS");
							N_0X706D57B0F50DA710("FHPRB_LOST");
							iLocal_346 = 1;
						}
						if (iLocal_269 == 1)
						{
							if (GET_GAME_TIMER() < iLocal_86 + 7500)
							{
								CLEAR_PRINTS();
							}
							iLocal_269 = 0;
						}
						if (iLocal_53 > 3)
						{
							if (!DOES_BLIP_EXIST(uLocal_50))
							{
								uLocal_50 = func_133(Local_92, 1);
							}
							if (iLocal_267 == 0)
							{
								if (!IS_MESSAGE_BEING_DISPLAYED())
								{
									func_155("GOD_2", 7500, 1);
									iLocal_267 = 1;
								}
							}
						}
					}
					else
					{
						if (DOES_BLIP_EXIST(uLocal_50))
						{
							REMOVE_BLIP(&uLocal_50);
						}
						if (iLocal_269 == 0)
						{
							CLEAR_PRINTS();
							func_155("GOD_4", 7500, -1);
							N_0X706D57B0F50DA710("FHPRB_COPS");
							iLocal_86 = GET_GAME_TIMER();
							iLocal_269 = 1;
							iLocal_346 = 0;
						}
					}
				}
			}
			else
			{
				if (DOES_BLIP_EXIST(uLocal_49))
				{
					REMOVE_BLIP(&uLocal_49);
				}
				if (DOES_BLIP_EXIST(uLocal_50))
				{
					REMOVE_BLIP(&uLocal_50);
				}
				if (IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
				{
					if (!DOES_BLIP_EXIST(uLocal_52))
					{
						uLocal_52 = func_153(iLocal_32, 0, 0);
						SET_BLIP_AS_FRIENDLY(uLocal_52, 1);
						if (IS_MESSAGE_BEING_DISPLAYED())
						{
							CLEAR_PRINTS();
						}
						if (iLocal_294 == 0)
						{
							func_155("GOD_6", 7500, -1);
							iLocal_85 = GET_GAME_TIMER();
							iLocal_294 = 1;
						}
						if (!func_156("HELP_1"))
						{
							func_152("HELP_1");
						}
					}
				}
			}
		}
		else
		{
			if (DOES_BLIP_EXIST(uLocal_52))
			{
				REMOVE_BLIP(&uLocal_52);
			}
			if (DOES_BLIP_EXIST(uLocal_50))
			{
				REMOVE_BLIP(&uLocal_50);
			}
			if (IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
			{
				if (!DOES_BLIP_EXIST(uLocal_49))
				{
					uLocal_49 = func_153(iLocal_33, 0, 0);
					SET_BLIP_AS_FRIENDLY(uLocal_49, 1);
				}
			}
			if (iLocal_270 == 0)
			{
				CLEAR_PRINTS();
				func_155("GOD_5", 7500, -1);
				iLocal_270 = 1;
			}
		}
	}
}

void func_152(char* sParam0)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

int func_153(int iParam0, bool bParam1, bool bParam2)
{
	return func_154(iParam0, !bParam1, bParam2);
}

int func_154(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	uVar0 = ADD_BLIP_FOR_ENTITY(iParam0);
	if (IS_ENTITY_A_VEHICLE(iParam0))
	{
		SET_BLIP_SCALE(uVar0, func_134(NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
		}
		else
		{
			SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (unk_0x101C509A6E67F99(iParam0))
	{
		SET_BLIP_SCALE(uVar0, func_134(NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (IS_ENTITY_AN_OBJECT(iParam0))
	{
		SET_BLIP_SCALE(uVar0, func_134(NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_155(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	BEGIN_TEXT_COMMAND_PRINT(sParam0);
	unk_0xA3136AD174470CC(iParam1, 1);
}

bool func_156(char* sParam0)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_157()
{
	if (iLocal_53 > 1)
	{
		func_151();
	}
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_35();
			iLocal_266 = 0;
		}
		iLocal_296 = 0;
		iLocal_297 = 0;
		iLocal_298 = 0;
		iLocal_299 = 0;
		iLocal_300 = 0;
		iLocal_301 = 0;
		iLocal_302 = 0;
		iLocal_303[0] = 0;
		iLocal_303[1] = 0;
		iLocal_304[0] = 0;
		iLocal_304[1] = 0;
		iLocal_305 = 0;
		iLocal_306 = 0;
		iLocal_307 = 0;
		iLocal_308 = 0;
		iLocal_309 = 0;
		iLocal_310 = 0;
		iLocal_311 = 0;
		iLocal_318 = 0;
		iLocal_319 = 0;
		iLocal_320 = 0;
		iLocal_321 = 0;
		iLocal_322 = 0;
		iLocal_323 = 0;
		iLocal_324 = 0;
		iLocal_325 = 0;
		iLocal_326 = 0;
		iLocal_327 = 0;
		iLocal_328[0] = 0;
		iLocal_328[1] = 0;
		iLocal_329[0] = 0;
		iLocal_329[1] = 0;
		iLocal_330[0] = 0;
		iLocal_330[1] = 0;
		iLocal_331[0] = 0;
		iLocal_331[1] = 0;
		iLocal_332[0] = 0;
		iLocal_332[1] = 0;
		iLocal_333[0] = 0;
		iLocal_333[1] = 0;
		iLocal_334[0] = 0;
		iLocal_334[1] = 0;
		iLocal_336 = 0;
		iLocal_339 = 0;
		iLocal_340[0] = 0;
		iLocal_341[0] = 0;
		iLocal_340[1] = 0;
		iLocal_341[1] = 0;
		iLocal_343 = 0;
		iLocal_344 = 0;
		iLocal_345 = 0;
		iLocal_359 = 0;
		iLocal_270 = 0;
		iLocal_271 = 0;
		iLocal_276 = 0;
		iLocal_286 = 0;
		iLocal_287 = 0;
		iLocal_288 = 0;
		iLocal_289 = 0;
		iLocal_290 = 0;
		iLocal_291 = 0;
		iLocal_292 = 0;
		iLocal_293 = 0;
		iLocal_294 = 0;
		iLocal_312 = 0;
		iLocal_342 = 0;
		iLocal_360 = 0;
		iLocal_362 = 0;
		iLocal_335 = 0;
		iLocal_85 = 0;
		iLocal_86 = 0;
		iLocal_54 = 0;
		while (iLocal_54 <= 6)
		{
			iLocal_268[iLocal_54] = 0;
			iLocal_282[iLocal_54] = 0;
			iLocal_284[iLocal_54] = 0;
			iLocal_285[iLocal_54] = 0;
			iLocal_283[iLocal_54] = 0;
			iLocal_54++;
		}
		REQUEST_ANIM_DICT("cellphone@str");
		REQUEST_ANIM_DICT("misscarsteal4@director_grip");
		if (IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
		{
			if (!DOES_BLIP_EXIST(uLocal_49))
			{
				uLocal_49 = func_153(iLocal_33, 0, 0);
				SET_BLIP_AS_FRIENDLY(uLocal_49, true);
			}
		}
		SET_MAX_WANTED_LEVEL(0);
		if (IS_SCREEN_FADED_OUT())
		{
			if (!func_31())
			{
				LOAD_SCENE(GET_ENTITY_COORDS(()(), 1));
			}
			if (DOES_ENTITY_EXIST(iLocal_34))
			{
				func_28(iLocal_34, -1, 1);
				SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_34);
			}
			else
			{
				func_28(0, -1, 1);
			}
		}
		if (!IS_SCREEN_FADED_IN())
		{
			DO_SCREEN_FADE_IN(800);
		}
		N_0X706D57B0F50DA710("FHPRB_START");
		CLEAR_AREA(43.5f, -615.8f, 32.4f, 50f, 1, 0, 0, 0);
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		if (iLocal_342 == 0)
		{
			if (!IS_MESSAGE_BEING_DISPLAYED())
			{
				REPLAY_RECORD_BACK_FOR_TIME(5f, 8f, 4);
				func_155("GOD_1", 7500, 1);
				iLocal_342 = 1;
			}
		}
		if (IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
		{
			if (IS_PED_IN_VEHICLE(()(), iLocal_33, 0))
			{
				N_0X706D57B0F50DA710("FHPRB_TRUCK");
				if (DOES_BLIP_EXIST(uLocal_49))
				{
					REMOVE_BLIP(&uLocal_49);
				}
				func_158(656, 0);
				SET_WANTED_LEVEL_MULTIPLIER(1f);
				iLocal_53 = 2;
			}
		}
	}
	if (iLocal_53 == 2)
	{
		if (IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
		{
			if (IS_PED_IN_VEHICLE(()(), iLocal_33, 0))
			{
				if (IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_33))
				{
					if (func_156("HELP_1"))
					{
						CLEAR_HELP(1);
					}
					if (DOES_BLIP_EXIST(uLocal_49))
					{
						REMOVE_BLIP(&uLocal_49);
					}
					if (DOES_BLIP_EXIST(uLocal_52))
					{
						REMOVE_BLIP(&uLocal_52);
					}
					if (GET_DISTANCE_BETWEEN_COORDS(Local_93, Local_96, 1) < 100f)
					{
						if (GET_PLAYER_WANTED_LEVEL(()()) == 0)
						{
							if (iLocal_271 == 1)
							{
								if (GET_GAME_TIMER() < iLocal_86 + 7500)
								{
									CLEAR_PRINTS();
									iLocal_271 = 0;
								}
							}
							if (iLocal_312 == 0)
							{
								REPLAY_RECORD_BACK_FOR_TIME(5f, 8f, 4);
								func_155("GOD_7", 7500, -1);
								iLocal_312 = 1;
							}
						}
						else if (iLocal_271 == 0)
						{
							REPLAY_RECORD_BACK_FOR_TIME(5f, 8f, 4);
							N_0XDFEBD56D9BD1EB16("SCRIPTED_SCANNER_REPORT_BS_PREP_B_01", 0f);
							iLocal_86 = GET_GAME_TIMER();
							func_155("GOD_4", 7500, -1);
							iLocal_271 = 1;
						}
					}
					else if (GET_PLAYER_WANTED_LEVEL(()()) == 0)
					{
						iLocal_53 = 0;
						iLocal_28 = 4;
					}
				}
				else
				{
					if (DOES_BLIP_EXIST(uLocal_49))
					{
						REMOVE_BLIP(&uLocal_49);
					}
					if (IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
					{
						if (!DOES_BLIP_EXIST(uLocal_52))
						{
							uLocal_52 = func_153(iLocal_32, 0, 0);
							SET_BLIP_AS_FRIENDLY(uLocal_52, true);
							if (IS_MESSAGE_BEING_DISPLAYED())
							{
								CLEAR_PRINTS();
							}
							if (iLocal_294 == 0)
							{
								func_155("GOD_6", 7500, -1);
								iLocal_294 = 1;
							}
							if (!func_156("HELP_1"))
							{
								func_152("HELP_1");
							}
						}
					}
				}
			}
			else
			{
				if (DOES_BLIP_EXIST(uLocal_52))
				{
					REMOVE_BLIP(&uLocal_52);
				}
				if (IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
				{
					if (!DOES_BLIP_EXIST(uLocal_49))
					{
						uLocal_49 = func_153(iLocal_33, 0, 0);
						SET_BLIP_AS_FRIENDLY(uLocal_49, true);
					}
				}
				if (iLocal_270 == 0)
				{
					CLEAR_PRINTS();
					func_155("GOD_5", 7500, -1);
					iLocal_270 = 1;
				}
			}
		}
	}
}

void func_158(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_63372 = iParam0;
	if (!Global_63370)
	{
		Global_63370 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_75457)
		{
			if (Global_75458[iVar0 /*9*/] == iParam0)
			{
				Global_75458[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_159()
{
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_35();
			iLocal_266 = 0;
		}
		func_182();
		func_121();
		if (!IS_SCREEN_FADED_IN())
		{
			LOAD_SCENE(GET_ENTITY_COORDS(()(), 1));
			DO_SCREEN_FADE_IN(800);
		}
		if (DOES_ENTITY_EXIST(Global_97178[3]))
		{
			if (IS_VEHICLE_DRIVEABLE(Global_97178[3], 0))
			{
				if (IS_THIS_MODEL_A_HELI(GET_ENTITY_MODEL(Global_97178[3])))
				{
					SET_ENTITY_AS_MISSION_ENTITY(Global_97178[3], 1, 1);
					func_161(1.0095f, -631.9655f, 34.7259f, 349.0681f, 0, 145);
				}
				if (((IS_THIS_MODEL_A_CAR(GET_ENTITY_MODEL(Global_97178[3])) || IS_THIS_MODEL_A_BIKE(GET_ENTITY_MODEL(Global_97178[3]))) || IS_THIS_MODEL_A_BICYCLE(GET_ENTITY_MODEL(Global_97178[3]))) || IS_THIS_MODEL_A_QUADBIKE(GET_ENTITY_MODEL(Global_97178[3])))
				{
					SET_ENTITY_AS_MISSION_ENTITY(Global_97178[3], 1, 1);
					func_161(49.0052f, -599.5534f, 30.6299f, 158.5544f, 0, 145);
				}
			}
		}
		func_160(79);
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		iLocal_53 = 0;
		iLocal_28 = 3;
	}
}

void func_160(int iParam0)
{
	if (Global_97603 != -1)
	{
		if (iParam0 == Global_97603)
		{
			Global_97607 = 1;
			return;
		}
	}
}

void func_161(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	var uVar1;
	
	if (DOES_ENTITY_EXIST(Global_104212.f_4))
	{
		if (IS_VEHICLE_DRIVEABLE(Global_104212.f_4, 0))
		{
			if (func_181(24) != Global_104212.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_178(GET_ENTITY_COORDS(Global_104212.f_4, 1), iParam3, &Var0, &uVar1))
					{
						Param0 = { Var0 };
						fParam1 = uVar1;
					}
				}
				func_162(Global_104212.f_4, Param0, fParam1, 24, 0);
			}
		}
	}
}

void func_162(int iParam0, struct<3> Param1, var uParam2, int iParam3, bool bParam4)
{
	struct<60> Var0;
	
	if (DOES_ENTITY_EXIST(iParam0) && IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (DOES_ENTITY_EXIST(Global_77348.f_484[25]) && IS_VEHICLE_DRIVEABLE(Global_77348.f_484[25], 0))
			{
				if (Global_77348.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((IS_BIG_VEHICLE(iParam0) || GET_ENTITY_MODEL(iParam0) == joaat("bus")) || GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_177(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_41(iParam0, &Var0);
		if (func_112(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { GET_ENTITY_COORDS(iParam0, 1) };
			uParam2 = GET_ENTITY_HEADING(iParam0);
		}
		if (iParam3 == 24)
		{
			if (GET_HASH_KEY(GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_78336 = GET_HASH_KEY(GET_THIS_SCRIPT_NAME());
			}
		}
		func_175(iParam3, &Var0, Param1, uParam2, func_63(iParam0));
		func_163(iParam3, iParam0, 0);
	}
}

void func_163(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_73(&(Global_77348.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_77348.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_77348.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_77348.f_555[0 /*21*/].f_4 != GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_78255 != -1 && Global_78255 != iParam0)
	{
		return;
	}
	if (DOES_ENTITY_EXIST(iParam1))
	{
		if (IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			if (!IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				SET_ENTITY_AS_MISSION_ENTITY(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_113648.f_32751.f_4801 = func_164();
			}
			if (iParam1 != Global_77348.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_181(iParam0);
					if ((DOES_ENTITY_EXIST(iVar0) && IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 != iVar0)
					{
						func_40(iVar0, 145);
					}
				}
				Global_78254 = iParam1;
				Global_78255 = iParam0;
				Global_78256 = iParam2;
			}
		}
	}
}

var func_164()
{
	var uVar0;
	
	func_174(&uVar0, GET_CLOCK_SECONDS());
	func_173(&uVar0, GET_CLOCK_MINUTES());
	func_172(&uVar0, GET_CLOCK_HOURS());
	func_167(&uVar0, GET_CLOCK_DAY_OF_MONTH());
	func_166(&uVar0, GET_CLOCK_MONTH());
	func_165(&uVar0, GET_CLOCK_YEAR());
	return uVar0;
}

void func_165(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_166(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_167(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_171(*uParam0);
	iVar1 = func_169(*uParam0);
	if (iParam1 < 1 || iParam1 > func_168(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_168(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_169(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_170(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_170(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_171(var uParam0)
{
	return uParam0 & 15;
}

void func_172(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_173(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_174(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

void func_175(int iParam0, var uParam1, struct<3> Param2, var uParam3, int iParam4)
{
	if (func_73(&(Global_77348.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_77348.f_555[0 /*21*/].f_9, 10))
		{
			func_176(iParam0);
			func_70(uParam1, &(Global_113648.f_32751.f_69[Global_77348.f_555[0 /*21*/].f_14 /*78*/]));
			if (BitTest(Global_77348.f_555[0 /*21*/].f_9, 11))
			{
				Global_113648.f_32751.f_1864[Global_77348.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_113648.f_32751.f_1934[Global_77348.f_555[0 /*21*/].f_14] = uParam3;
			}
			else
			{
				Global_113648.f_32751.f_1864[Global_77348.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_113648.f_32751.f_1934[Global_77348.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_66(iParam0, 1);
		}
	}
}

void func_176(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_73(&(Global_77348.f_555[0 /*21*/]), iParam0))
	{
		if (DOES_ENTITY_EXIST(Global_77348.f_139[iParam0]))
		{
			SET_ENTITY_AS_MISSION_ENTITY(Global_77348.f_139[iParam0], 1, 1);
			SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_77348.f_139[iParam0]));
			Global_77348.f_139[iParam0] = 0;
		}
		if (BitTest(Global_77348.f_555[0 /*21*/].f_9, 13))
		{
			func_66(iParam0, 0);
		}
	}
}

void func_177(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_176(iParam0);
	func_66(iParam0, 0);
}

int func_178(struct<3> Param0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_179(Param0, iParam1, 1);
	switch (iVar0)
	{
		case 0:
			*uParam2 = { -827.351f, 157.785f, 68.2143f };
			*uParam3 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam2 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam3 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam2 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam3 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam2 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam3 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam2 = { -18.118f, -1455.126f, 29.5004f };
			*uParam3 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam2 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam3 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_179(struct<3> Param0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_95719[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_95719[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_180(iVar0) || iParam2 == 0)
				{
					fVar1 = GET_DISTANCE_BETWEEN_COORDS(Param0, Global_95719[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

var func_180(int iParam0)
{
	return BitTest(Global_113648.f_7231[iParam0], 0);
}

int func_181(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_77348.f_139[iParam0];
}

void func_182()
{
	Global_94859 = 1;
}

void func_183()
{
	SET_ALL_RANDOM_PEDS_FLEE(()(), 1);
	SET_WANTED_LEVEL_MULTIPLIER(0.01f);
	uLocal_44 = ADD_SCENARIO_BLOCKING_AREA(861.6f, -1599.7f, 27.9f, 961.8f, -1476.4f, 49.7f, 0, 1, 1, 1);
	uLocal_45 = ADD_SCENARIO_BLOCKING_AREA(851.2f, -1598.2f, 29.7f, 855.7f, -1587.1f, 33f, 0, 1, 1, 1);
	uLocal_46 = ADD_SCENARIO_BLOCKING_AREA(859.4f, -1569.6f, 32.3f, 865.4f, -1561f, 28.7f, 0, 1, 1, 1);
	uLocal_47 = ADD_SCENARIO_BLOCKING_AREA(939f, -1576.8f, 33f, 943.8f, -1571.3f, 28.9f, 0, 1, 1, 1);
	uLocal_42 = ADD_SCENARIO_BLOCKING_AREA(5.4f, -588f, 39.1f, 57.4f, -678.8f, 25.4f, 0, 1, 1, 1);
	uLocal_43 = ADD_SCENARIO_BLOCKING_AREA(50.9f, -641.6f, 37.7f, 81.1f, -608.4f, 29.5f, 0, 1, 1, 1);
	if (func_30())
	{
		if (Global_94858 == 1)
		{
			func_185(28.4065f, -608.9371f, 30.6293f, 70.7778f, 1, 0);
			iLocal_360 = 1;
			iLocal_266 = 1;
			iLocal_53 = 0;
			iLocal_28 = 5;
		}
		else if (func_184() == 0)
		{
			if (func_120() && func_117(7f, 7f, 7f, 1))
			{
				func_185(818.8139f, -1610.406f, 30.7951f, 264.412f, 1, 0);
			}
			else
			{
				func_185(825.5603f, -1605.825f, 30.9548f, 312.5221f, 1, 0);
			}
			iLocal_266 = 1;
			iLocal_360 = 1;
			iLocal_53 = 0;
			iLocal_28 = 3;
		}
	}
	else if (func_220(0))
	{
		iLocal_266 = 1;
		iLocal_360 = 1;
		iLocal_53 = 0;
		iLocal_28 = 3;
	}
	else
	{
		iLocal_53 = 0;
		iLocal_28 = 2;
	}
}

int func_184()
{
	if (!Global_100681 == 10 && !Global_100681 == 9)
	{
		return 0;
	}
	return Global_100681.f_2;
}

void func_185(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	if (func_30())
	{
		SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		CLEAR_BIT(&(Global_100681.f_20), 2);
		SET_GAME_PAUSED(1);
		if (IS_PLAYER_PLAYING(()()))
		{
			SET_PLAYER_CONTROL(()(), 0, 0);
		}
		Global_100677 = { Param0 };
		Global_100680 = fParam1;
		Global_100676 = 1;
		if (iParam2 == 1)
		{
			SET_BIT(&(Global_100681.f_20), 14);
		}
		else
		{
			CLEAR_BIT(&(Global_100681.f_20), 14);
		}
		if (iParam3 == 1)
		{
			SET_BIT(&(Global_100681.f_20), 24);
		}
		else
		{
			CLEAR_BIT(&(Global_100681.f_20), 24);
		}
		func_29(1);
	}
}

void func_186()
{
	if (!func_30())
	{
		iLocal_28 = 1;
	}
	else
	{
		iLocal_28 = 1;
	}
}

void func_187()
{
	if (!DOES_ENTITY_EXIST(iLocal_40))
	{
		if (GET_DISTANCE_BETWEEN_COORDS(GET_ENTITY_COORDS(()(), 1), 45f, -616.2f, 30.8f, 1) < 150f)
		{
			REQUEST_MODEL(joaat("s_m_m_security_01"));
			if (HAS_MODEL_LOADED(joaat("s_m_m_security_01")))
			{
				iLocal_40 = CREATE_PED(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, 1);
				unk_0x428AFDCAA63B06E(iLocal_40, 324, 1);
			}
			SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
		}
	}
	if (DOES_ENTITY_EXIST(iLocal_40))
	{
		if (!IS_PED_INJURED(iLocal_40))
		{
			if (DOES_SCENARIO_EXIST_IN_AREA(65.2f, -617.2f, 30.8f, 5f, 0))
			{
				if (iLocal_337 == 0)
				{
					if (IS_ENTITY_ON_SCREEN(iLocal_40))
					{
						CLEAR_PED_TASKS(iLocal_40);
					}
					else
					{
						CLEAR_PED_TASKS_IMMEDIATELY(iLocal_40);
					}
					TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_40, 65.2f, -617.2f, 31f, 2f, 0);
					SET_PED_KEEP_TASK(iLocal_40, 1);
					iLocal_89 = GET_GAME_TIMER();
					iLocal_337 = 1;
				}
				else if (GET_GAME_TIMER() > iLocal_89 + 5000)
				{
					if (!IS_PED_USING_ANY_SCENARIO(iLocal_40))
					{
						iLocal_337 = 0;
					}
				}
			}
			if (func_189(()(), iLocal_40, 1) < 20f)
			{
				if (iLocal_316 == 0)
				{
					TASK_LOOK_AT_ENTITY(iLocal_40, ()(), -1, 1072, 3);
					iLocal_316 = 1;
				}
			}
			else if (iLocal_316 == 1)
			{
				TASK_LOOK_AT_ENTITY(iLocal_40, ()(), 1, 0, 2);
				iLocal_316 = 0;
			}
		}
	}
	if (GET_DISTANCE_BETWEEN_COORDS(GET_ENTITY_COORDS(()(), 1), 45f, -616.2f, 30.8f, 1) < 50f)
	{
		if (iLocal_338 == 0)
		{
			iLocal_90 = 498972213;
			iLocal_91 = -512924631;
			ADD_DOOR_TO_SYSTEM(iLocal_90, joaat("prop_sec_barrier_ld_01a"), 61f, -633f, 32f, 1, 1, 0);
			ADD_DOOR_TO_SYSTEM(iLocal_91, joaat("prop_sec_barrier_ld_01a"), 66f, -618f, 32f, 1, 1, 0);
			iLocal_338 = 1;
		}
		if (iLocal_338 == 1)
		{
			if (GET_PLAYER_WANTED_LEVEL(()()) == 0)
			{
				if (Local_93.f_0 > 35f)
				{
					if (fLocal_97 < 1f)
					{
						fLocal_97 = (fLocal_97 + 0.02f);
					}
					else
					{
						fLocal_97 = 1f;
					}
					if (fLocal_97 <= 1f)
					{
						DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_90, fLocal_97, 0, 1);
						DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_91, fLocal_97, 0, 1);
						DOOR_SYSTEM_SET_DOOR_STATE(iLocal_90, 4, 0, 1);
						DOOR_SYSTEM_SET_DOOR_STATE(iLocal_91, 4, 0, 1);
						iLocal_317 = 0;
					}
				}
				if (Local_93.f_0 < 35f)
				{
					if (fLocal_97 > 0f)
					{
						fLocal_97 = (fLocal_97 - 0.02f);
					}
					else
					{
						fLocal_97 = 0f;
					}
					if (fLocal_97 >= 0f)
					{
						DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_90, fLocal_97, 0, 1);
						DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_91, fLocal_97, 0, 1);
						DOOR_SYSTEM_SET_DOOR_STATE(iLocal_90, 4, 0, 1);
						DOOR_SYSTEM_SET_DOOR_STATE(iLocal_91, 4, 0, 1);
						iLocal_317 = 0;
					}
				}
			}
			else if (iLocal_317 == 0)
			{
				if (Local_93.f_0 < 35f)
				{
					if (fLocal_97 > 0f)
					{
						fLocal_97 = (fLocal_97 - 0.02f);
					}
					else
					{
						fLocal_97 = 0f;
					}
					if (fLocal_97 >= 0f)
					{
						DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_90, fLocal_97, 0, 1);
						DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_91, fLocal_97, 0, 1);
						DOOR_SYSTEM_SET_DOOR_STATE(iLocal_90, 4, 0, 1);
						DOOR_SYSTEM_SET_DOOR_STATE(iLocal_91, 4, 0, 1);
						iLocal_317 = 1;
					}
				}
			}
		}
		if (IS_ENTITY_IN_ANGLED_AREA(()(), 62.90151f, -638.6329f, 29.9188f, 70.78919f, -617.1338f, 36.91788f, 10.75f, 0, 1, 0))
		{
			if (DOES_ENTITY_EXIST(iLocal_40))
			{
				if (!IS_PED_INJURED(iLocal_40))
				{
					if (GET_PLAYER_WANTED_LEVEL(()()) == 0)
					{
						if (iLocal_314 == 0)
						{
							if (iLocal_313 == 0)
							{
								func_150(&uLocal_99, 4, iLocal_40, "FHPBSecGuard", 0, 1);
								if (func_188(&uLocal_99, "FHPBAUD", "FHPB_CHAT20", 7, 0, 0, 0))
								{
									iLocal_313 = 1;
								}
							}
						}
						else if (iLocal_315 == 0)
						{
							func_150(&uLocal_99, 4, iLocal_40, "FHPBSecGuard", 0, 1);
							if (func_188(&uLocal_99, "FHPBAUD", "FHPB_CHAT22", 7, 0, 0, 0))
							{
								iLocal_315 = 1;
							}
						}
					}
					else if (iLocal_314 == 0)
					{
						func_150(&uLocal_99, 4, iLocal_40, "FHPBSecGuard", 0, 1);
						if (func_188(&uLocal_99, "FHPBAUD", "FHPB_CHAT21", 7, 0, 0, 0))
						{
							iLocal_314 = 1;
						}
					}
				}
			}
		}
	}
}

bool func_188(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_149(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21732 = 0;
	Global_21734 = 0;
	Global_21739 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_2883585 = 0;
	return func_137(sParam2, iParam3, 0);
}

float func_189(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!IS_ENTITY_DEAD(iParam0, 0))
	{
		Var0 = { GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!IS_ENTITY_DEAD(iParam1, 0))
	{
		Var1 = { GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		Var1 = { GET_ENTITY_COORDS(iParam1, 0) };
	}
	return GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, iParam2);
}

void func_190()
{
	int iVar0;
	
	if (!IS_MESSAGE_BEING_DISPLAYED())
	{
		if (!func_194() || !IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		{
			if (iLocal_28 == 3)
			{
				if (!IS_PED_IN_ANY_VEHICLE(()(), 0) && iLocal_31 == 0)
				{
					if (func_14() == 0)
					{
						if (iLocal_29 == 1)
						{
							if (iLocal_291 == 0)
							{
								if (func_192() && func_191())
								{
									if (func_188(&uLocal_99, "SOL1AUD", "SOL1_SEE5", 7, 0, 0, 0))
									{
										iLocal_88 = GET_GAME_TIMER();
										iLocal_291 = 1;
									}
								}
							}
						}
						if (iLocal_29 == 1)
						{
							if (iLocal_291 == 1 && GET_GAME_TIMER() > iLocal_88 + 7000)
							{
								if (func_192() && func_191())
								{
									if (func_188(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
									{
										iLocal_88 = GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (iLocal_29 == 2)
					{
						if (iLocal_325 == 0)
						{
							if (func_192())
							{
								if (func_188(&uLocal_99, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_79 = GET_GAME_TIMER();
									iLocal_325 = 1;
								}
							}
						}
					}
				}
				else if (iLocal_31 == 2 && iLocal_29 == 1)
				{
					if (iLocal_336 == 0)
					{
						if (func_192() && func_191())
						{
							if (func_188(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_84 = GET_GAME_TIMER();
								iLocal_336 = 1;
							}
						}
					}
					else if (GET_GAME_TIMER() > iLocal_84 + 8000)
					{
						if (func_192() && func_191())
						{
							if (func_188(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_84 = GET_GAME_TIMER();
							}
						}
					}
				}
				if (iLocal_29 == 4)
				{
					if (iLocal_290 == 0)
					{
						func_127();
						if (func_192())
						{
							GET_CURRENT_PED_WEAPON(()(), &iVar0, 1);
							if (iVar0 != joaat("weapon_unarmed") && iVar0 != 0)
							{
								if (func_188(&uLocal_99, "SOL1AUD", "SOL1_ARM3", 7, 0, 0, 0))
								{
									iLocal_61 = GET_GAME_TIMER();
									iLocal_286 = 1;
									iLocal_290 = 1;
								}
							}
							else
							{
								iLocal_61 = GET_GAME_TIMER();
								iLocal_286 = 1;
								iLocal_290 = 1;
							}
						}
					}
					if (iLocal_290 == 1)
					{
						if (iLocal_286 == 0)
						{
							iLocal_61 = GET_GAME_TIMER();
							iLocal_286 = 1;
						}
						if (iLocal_286 == 1)
						{
							if (GET_GAME_TIMER() > iLocal_61 + 9000)
							{
								if (func_192())
								{
									if (func_188(&uLocal_99, "SOL1AUD", "SOL1_PAN3", 7, 0, 0, 0))
									{
										iLocal_286 = 0;
									}
								}
							}
						}
					}
				}
				if (iLocal_29 == 3)
				{
					if (iLocal_322 == 1)
					{
						if (iLocal_288 == 0)
						{
							if (iLocal_289 == 1)
							{
								if (func_192())
								{
									if (func_188(&uLocal_99, "SOL1AUD", "SOL1_STEAL3", 7, 0, 0, 0))
									{
										iLocal_288 = 1;
									}
								}
							}
						}
					}
					if (iLocal_287 == 0)
					{
						if (DOES_ENTITY_EXIST(iLocal_33))
						{
							if (IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
							{
								if (IS_PED_IN_VEHICLE(()(), iLocal_33, 0))
								{
									if (func_192())
									{
										if (func_188(&uLocal_99, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_62 = GET_GAME_TIMER();
											iLocal_288 = 1;
										}
									}
								}
							}
						}
					}
					if (GET_GAME_TIMER() > iLocal_62 + 10000)
					{
						if (DOES_ENTITY_EXIST(iLocal_33))
						{
							if (IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
							{
								if (IS_PED_IN_VEHICLE(()(), iLocal_33, 0))
								{
									if (func_192())
									{
										if (func_188(&uLocal_99, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_62 = GET_GAME_TIMER();
										}
									}
								}
							}
						}
					}
					if (iLocal_323 == 1)
					{
						if (iLocal_324 == 0)
						{
							if (func_192())
							{
								if (func_188(&uLocal_99, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_324 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_191()
{
	if (func_14() == 0)
	{
		func_150(&uLocal_99, 0, ()(), "MICHAEL", 0, 1);
		return 1;
	}
	if (func_14() == 1)
	{
		func_150(&uLocal_99, 1, ()(), "FRANKLIN", 0, 1);
		return 1;
	}
	if (func_14() == 2)
	{
		func_150(&uLocal_99, 2, ()(), "TREVOR", 0, 1);
		return 1;
	}
	return 0;
}

int func_192()
{
	int iVar0;
	
	iLocal_57 = 0;
	while (iLocal_57 <= 6)
	{
		if (DOES_ENTITY_EXIST(iLocal_35[iLocal_57]))
		{
			if (!IS_PED_INJURED(iLocal_35[iLocal_57]))
			{
				iVar0 = func_193(()(), iLocal_264, 0, 0, -1);
				if (DOES_ENTITY_EXIST(iVar0))
				{
					if (!IS_PED_INJURED(iVar0))
					{
					}
				}
				if (iVar0 == iLocal_35[iLocal_57] && func_189(()(), iVar0, 1) < 15f)
				{
					func_150(&uLocal_99, 5, iLocal_35[iLocal_57], "CONSTRUCTION3", 0, 1);
					return 1;
				}
			}
		}
		iLocal_57++;
	}
	return 0;
}

int func_193(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0[16];
	int iVar1;
	
	iVar1 = 0;
	if (!IS_PED_INJURED(iParam0))
	{
		GET_PED_NEARBY_PEDS(iParam0, &iVar0, iParam4);
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if (DOES_ENTITY_EXIST(iVar0[iVar1]))
			{
				if (!IS_PED_INJURED(iVar0[iVar1]))
				{
					if (GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar1]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (IS_ENTITY_ON_SCREEN(iVar0[iVar1]))
								{
									return iVar0[iVar1];
								}
							}
							else
							{
								return iVar0[iVar1];
							}
						}
						else if (iVar1 + iParam2) <= (iVar0 - 1)
						{
							if (DOES_ENTITY_EXIST(iVar0[(iVar1 + iParam2)]))
							{
								if (!IS_PED_INJURED(iVar0[(iVar1 + iParam2)]))
								{
									if (GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[(iVar1 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (IS_ENTITY_ON_SCREEN(iVar0[(iVar1 + iParam2)]))
											{
												return iVar0[(iVar1 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar1 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_194()
{
	if (Global_21725 != 0 || N_0X16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

void func_195()
{
	if (!IS_PED_INJURED(()()))
	{
		if (IS_PED_CURRENT_WEAPON_SILENCED(()()) && IS_PED_SHOOTING(()()))
		{
			SET_WANTED_LEVEL_MULTIPLIER(0f);
		}
		else
		{
			SET_WANTED_LEVEL_MULTIPLIER(1f);
		}
	}
	func_202();
	if (iLocal_303[0])
	{
		if (func_189(()(), iLocal_36[0], 1) < 20f && CAN_PED_SEE_HATED_PED(iLocal_36[0], ()()))
		{
			if (iLocal_328[0] == 0)
			{
				TASK_LOOK_AT_ENTITY(iLocal_36[0], ()(), -1, 1072, 3);
				iLocal_328[0] = 1;
			}
			if (iLocal_328[0] == 1)
			{
				if (GET_SCRIPT_TASK_STATUS(iLocal_36[0], joaat("script_task_look_at_entity")) != 0 || GET_SCRIPT_TASK_STATUS(iLocal_36[0], joaat("script_task_look_at_entity")) != 1)
				{
					iLocal_328[0] = 0;
				}
			}
		}
		else if (iLocal_328[0] == 1)
		{
			TASK_LOOK_AT_ENTITY(iLocal_36[0], ()(), 1, 0, 2);
			iLocal_328[0] = 0;
		}
	}
	if (iLocal_303[1])
	{
		if (func_189(()(), iLocal_36[1], 1) < 20f && CAN_PED_SEE_HATED_PED(iLocal_36[1], ()()))
		{
			if (iLocal_328[1] == 0)
			{
				TASK_LOOK_AT_ENTITY(iLocal_36[1], ()(), -1, 1072, 3);
				iLocal_328[1] = 1;
			}
			if (iLocal_328[1] == 1)
			{
				if (GET_SCRIPT_TASK_STATUS(iLocal_36[1], joaat("script_task_look_at_entity")) != 0 || GET_SCRIPT_TASK_STATUS(iLocal_36[1], joaat("script_task_look_at_entity")) != 1)
				{
					iLocal_328[1] = 0;
				}
			}
		}
		else if (iLocal_328[1] == 1)
		{
			TASK_LOOK_AT_ENTITY(iLocal_36[1], ()(), 1, 0, 2);
			iLocal_328[1] = 0;
		}
	}
	if (iLocal_303[0] && iLocal_303[1])
	{
		if (func_189(()(), iLocal_36[0], 1) < func_189(()(), iLocal_36[1], 1))
		{
			iLocal_298 = 1;
			iLocal_299 = 0;
		}
		else
		{
			iLocal_298 = 0;
			iLocal_299 = 1;
		}
	}
	else
	{
		if (iLocal_303[0] && !iLocal_303[1])
		{
			iLocal_298 = 1;
			iLocal_299 = 0;
		}
		if (iLocal_303[1] && !iLocal_303[0])
		{
			iLocal_298 = 0;
			iLocal_299 = 1;
		}
	}
	switch (iLocal_31)
	{
		case 0:
			if (DOES_SCENARIO_GROUP_EXIST("SCRAP_SECURITY"))
			{
				if (!unk_0x3F4074C23C3682E("SCRAP_SECURITY"))
				{
					SET_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY", 1);
				}
				if (unk_0x3F4074C23C3682E("SCRAP_SECURITY"))
				{
					if (DOES_ENTITY_EXIST(iLocal_36[0]))
					{
						if (!IS_PED_INJURED(iLocal_36[0]))
						{
							if (!IS_PED_BEING_STEALTH_KILLED(iLocal_36[0]))
							{
								if (DOES_SCENARIO_EXIST_IN_AREA(863.1551f, -1564.572f, 29.3231f, 5f, 1))
								{
									iLocal_83[0] = GET_GAME_TIMER();
									if (!IS_PED_ACTIVE_IN_SCENARIO(iLocal_36[0]))
									{
										if (iLocal_341[0] == 0)
										{
											TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_36[0], 863.1551f, -1564.572f, 29.3231f, 5f, 0);
											iLocal_340[0] = 0;
											iLocal_341[0] = 1;
										}
									}
								}
								else if (GET_GAME_TIMER() > iLocal_83[0] + 2000)
								{
									if (GET_DISTANCE_BETWEEN_COORDS(GET_ENTITY_COORDS(iLocal_36[0], 1), 863.1551f, -1564.572f, 29.3231f, 1) > 3f)
									{
										if (iLocal_340[0] == 0)
										{
											TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_36[0], 863.1551f, -1564.572f, 29.3231f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_341[0] = 0;
											iLocal_340[0] = 1;
										}
									}
								}
							}
						}
					}
					if (DOES_ENTITY_EXIST(iLocal_36[1]))
					{
						if (!IS_PED_INJURED(iLocal_36[1]))
						{
							if (!IS_PED_BEING_STEALTH_KILLED(iLocal_36[1]))
							{
								if (DOES_SCENARIO_EXIST_IN_AREA(940.2881f, -1573.877f, 29.3866f, 5f, 1))
								{
									iLocal_83[1] = GET_GAME_TIMER();
									if (!IS_PED_ACTIVE_IN_SCENARIO(iLocal_36[1]))
									{
										if (iLocal_341[1] == 0)
										{
											TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_36[1], 940.2881f, -1573.877f, 29.3866f, 5f, 0);
											iLocal_340[1] = 0;
											iLocal_341[1] = 1;
										}
									}
								}
								else if (GET_GAME_TIMER() > iLocal_83[1] + 2000)
								{
									if (GET_DISTANCE_BETWEEN_COORDS(GET_ENTITY_COORDS(iLocal_36[1], 1), 940.2881f, -1573.877f, 29.3866f, 1) > 3f)
									{
										if (iLocal_340[1] == 0)
										{
											TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_36[1], 940.2881f, -1573.877f, 29.3866f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_341[1] = 0;
											iLocal_340[1] = 1;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (DOES_ENTITY_EXIST(iLocal_36[0]))
			{
				if (!IS_PED_INJURED(iLocal_36[0]))
				{
					if (func_189(()(), iLocal_36[0], 1) < 20f)
					{
						if ((func_201(()()) == joaat("weapon_unarmed") || IS_PED_IN_ANY_VEHICLE(()(), 0)) || func_200(0))
						{
							if (IS_PED_FACING_PED(()(), iLocal_36[0], 100f) || CAN_PED_SEE_HATED_PED(iLocal_36[0], ()()))
							{
								if (IS_ENTITY_IN_ANGLED_AREA(()(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, 1, 0) || IS_ENTITY_IN_ANGLED_AREA(()(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
								{
									if (iLocal_334[0] == 0)
									{
										if (!IS_PED_FACING_PED(iLocal_36[0], ()(), 45f))
										{
											if (!IS_ENTITY_ON_SCREEN(iLocal_36[0]))
											{
												CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[0]);
											}
											else
											{
												CLEAR_PED_TASKS(iLocal_36[0]);
											}
											unk_0xE95B96CFEFE7B61(iLocal_36[0], ()(), 5000);
											iLocal_82[0] = GET_GAME_TIMER();
											func_199(iLocal_36[0]);
											iLocal_334[0] = 1;
										}
									}
									if (iLocal_334[0] == 1)
									{
										if (GET_GAME_TIMER() > iLocal_82[0] + 5000)
										{
											iLocal_334[0] = 0;
										}
									}
									if (iLocal_304[0] == 0 && iLocal_304[1] == 0)
									{
										if (iLocal_302 == 0)
										{
											func_197(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 6);
											iLocal_66 = GET_GAME_TIMER();
											iLocal_302 = 1;
										}
										else if (GET_GAME_TIMER() > iLocal_66 + 15000)
										{
											func_197(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
											iLocal_66 = GET_GAME_TIMER();
										}
									}
									else
									{
										if (iLocal_304[0] == 1)
										{
											if (iLocal_305 == 0)
											{
												func_197(iLocal_36[0], "PROVOKE_GEBERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_72 = GET_GAME_TIMER();
												iLocal_305 = 1;
											}
											else if (GET_GAME_TIMER() > iLocal_72 + 15000)
											{
												func_197(iLocal_36[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_72 = GET_GAME_TIMER();
											}
										}
										if (iLocal_304[1] == 1)
										{
											if (iLocal_306 == 0)
											{
												func_197(iLocal_36[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_73 = GET_GAME_TIMER();
												iLocal_306 = 1;
											}
											else if (GET_GAME_TIMER() > iLocal_73 + 15000)
											{
												func_197(iLocal_36[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_73 = GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (DOES_ENTITY_EXIST(iLocal_36[1]))
			{
				if (!IS_PED_INJURED(iLocal_36[1]))
				{
					if (func_189(()(), iLocal_36[1], 1) < 15f)
					{
						if ((func_201(()()) == joaat("weapon_unarmed") || IS_PED_IN_ANY_VEHICLE(()(), 0)) || func_200(0))
						{
							if (IS_PED_FACING_PED(()(), iLocal_36[1], 100f))
							{
								if (IS_ENTITY_IN_ANGLED_AREA(()(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, 1, 0))
								{
									if (iLocal_334[1] == 0)
									{
										if (!IS_PED_FACING_PED(iLocal_36[1], ()(), 45f))
										{
											if (!IS_ENTITY_ON_SCREEN(iLocal_36[1]))
											{
												CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[1]);
											}
											else
											{
												CLEAR_PED_TASKS(iLocal_36[1]);
											}
											unk_0xE95B96CFEFE7B61(iLocal_36[1], ()(), 5000);
											iLocal_82[1] = GET_GAME_TIMER();
											func_199(iLocal_36[1]);
											iLocal_334[1] = 1;
										}
									}
									if (iLocal_334[1] == 1)
									{
										if (GET_GAME_TIMER() > iLocal_82[1] + 5000)
										{
											iLocal_334[1] = 0;
										}
									}
									if (iLocal_304[0] == 0 && iLocal_304[1] == 0)
									{
										if (iLocal_302 == 0)
										{
											func_197(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
											iLocal_66 = GET_GAME_TIMER();
											iLocal_302 = 1;
										}
										else if (GET_GAME_TIMER() > iLocal_66 + 15000)
										{
											func_197(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
											iLocal_66 = GET_GAME_TIMER();
										}
									}
									else
									{
										if (iLocal_304[1] == 1)
										{
											if (iLocal_305 == 0)
											{
												func_197(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_72 = GET_GAME_TIMER();
												iLocal_305 = 1;
											}
											else if (GET_GAME_TIMER() > iLocal_72 + 15000)
											{
												func_197(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_72 = GET_GAME_TIMER();
											}
										}
										if (iLocal_304[0] == 1)
										{
											if (iLocal_306 == 0)
											{
												func_197(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_73 = GET_GAME_TIMER();
												iLocal_306 = 1;
											}
											else if (GET_GAME_TIMER() > iLocal_73 + 15000)
											{
												func_197(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_73 = GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (func_196() || iLocal_297 == 1)
			{
				if (DOES_ENTITY_EXIST(iLocal_36[0]))
				{
					if (!IS_PED_INJURED(iLocal_36[0]))
					{
						if (CAN_PED_SEE_HATED_PED(iLocal_36[0], ()()))
						{
							iLocal_81[0] = GET_GAME_TIMER();
							iLocal_332[0] = 1;
							if (iLocal_331[0] == 0)
							{
								if (IS_ENTITY_ON_SCREEN(iLocal_36[0]))
								{
									CLEAR_PED_TASKS(iLocal_36[0]);
								}
								else
								{
									CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[0]);
								}
								SET_PED_COMBAT_ATTRIBUTES(iLocal_36[0], 50, 1);
								TASK_COMBAT_PED(iLocal_36[0], ()(), 0, 16);
								func_199(iLocal_36[0]);
								iLocal_331[0] = 1;
							}
						}
						else if (iLocal_333[0] == 0)
						{
							if (iLocal_332[0] == 0)
							{
								if (IS_ENTITY_ON_SCREEN(iLocal_36[0]))
								{
									CLEAR_PED_TASKS(iLocal_36[0]);
								}
								else
								{
									CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[0]);
								}
								TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_36[0], GET_ENTITY_COORDS(()(), 1), 3f, -1, 1048576000, 0, 1193033728);
								func_199(iLocal_36[0]);
								iLocal_333[0] = 1;
							}
							if (iLocal_332[0] == 1)
							{
								if (GET_GAME_TIMER() > iLocal_81[0] + 500)
								{
									if (IS_ENTITY_ON_SCREEN(iLocal_36[0]))
									{
										CLEAR_PED_TASKS(iLocal_36[0]);
									}
									else
									{
										CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[0]);
									}
									TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_36[0], GET_ENTITY_COORDS(()(), 1), 3f, -1, 1048576000, 0, 1193033728);
									func_199(iLocal_36[0]);
									iLocal_333[0] = 1;
								}
							}
						}
					}
				}
				if (DOES_ENTITY_EXIST(iLocal_36[1]))
				{
					if (!IS_PED_INJURED(iLocal_36[1]))
					{
						if (CAN_PED_SEE_HATED_PED(iLocal_36[1], ()()))
						{
							iLocal_81[1] = GET_GAME_TIMER();
							iLocal_332[1] = 1;
							if (iLocal_331[1] == 0)
							{
								if (IS_ENTITY_ON_SCREEN(iLocal_36[1]))
								{
									CLEAR_PED_TASKS(iLocal_36[1]);
								}
								else
								{
									CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[1]);
								}
								SET_PED_COMBAT_ATTRIBUTES(iLocal_36[1], 50, 1);
								TASK_COMBAT_PED(iLocal_36[1], ()(), 0, 16);
								func_199(iLocal_36[1]);
								iLocal_331[1] = 1;
							}
						}
						else if (iLocal_333[1] == 0)
						{
							if (iLocal_332[1] == 0)
							{
								if (IS_ENTITY_ON_SCREEN(iLocal_36[1]))
								{
									CLEAR_PED_TASKS(iLocal_36[1]);
								}
								else
								{
									CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[1]);
								}
								TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_36[1], GET_ENTITY_COORDS(()(), 1), 3f, -1, 1048576000, 0, 1193033728);
								func_199(iLocal_36[1]);
								iLocal_333[1] = 1;
							}
							if (iLocal_332[1] == 1)
							{
								if (GET_GAME_TIMER() > iLocal_81[1] + 500)
								{
									if (IS_ENTITY_ON_SCREEN(iLocal_36[1]))
									{
										CLEAR_PED_TASKS(iLocal_36[1]);
									}
									else
									{
										CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[1]);
									}
									TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_36[1], GET_ENTITY_COORDS(()(), 1), 3f, -1, 1048576000, 0, 1193033728);
									func_199(iLocal_36[1]);
									iLocal_333[1] = 1;
								}
							}
						}
					}
				}
				if (func_196())
				{
					if (iLocal_307 == 0)
					{
						if (GET_PLAYER_WANTED_LEVEL(()()) < 2)
						{
							SET_MAX_WANTED_LEVEL(5);
							SET_WANTED_LEVEL_MULTIPLIER(1f);
							SET_PLAYER_WANTED_LEVEL(()(), 2, 0);
							SET_PLAYER_WANTED_LEVEL_NOW(()(), 0);
							iLocal_307 = 1;
						}
					}
					if (iLocal_298 == 1)
					{
						if (iLocal_300 == 0)
						{
							if (func_189(()(), iLocal_36[0], 1) < 20f)
							{
								if (!N_0X9072C8B49907BFAD(iLocal_36[0]))
								{
									func_197(iLocal_36[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
									iLocal_71 = GET_GAME_TIMER();
									iLocal_300 = 1;
								}
							}
						}
						else if (GET_GAME_TIMER() > iLocal_71 + 7000)
						{
							if (func_189(()(), iLocal_36[0], 1) < 20f)
							{
								if (!N_0X9072C8B49907BFAD(iLocal_36[0]))
								{
									func_197(iLocal_36[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
									iLocal_71 = GET_GAME_TIMER();
								}
							}
						}
					}
					if (iLocal_299 == 1)
					{
						if (iLocal_300 == 0)
						{
							if (func_189(()(), iLocal_36[1], 1) < 20f)
							{
								if (!N_0X9072C8B49907BFAD(iLocal_36[1]))
								{
									func_197(iLocal_36[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_71 = GET_GAME_TIMER();
									iLocal_300 = 1;
								}
							}
						}
						else if (GET_GAME_TIMER() > iLocal_71 + 7000)
						{
							if (func_189(()(), iLocal_36[1], 1) < 20f)
							{
								if (!N_0X9072C8B49907BFAD(iLocal_36[1]))
								{
									func_197(iLocal_36[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_71 = GET_GAME_TIMER();
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_339 == 0)
					{
						iLocal_41 = func_193(()(), joaat("COP"), 0, 0, 28);
						if (iLocal_41 != 0)
						{
							if (DOES_ENTITY_EXIST(iLocal_41))
							{
								if (!IS_PED_INJURED(iLocal_41))
								{
									if (func_189(()(), iLocal_41, 1) < 35f)
									{
										iLocal_339 = 1;
									}
								}
							}
						}
					}
					if (GET_PLAYER_WANTED_LEVEL(()()) > 0 && iLocal_339 == 0)
					{
						if (iLocal_298 == 1)
						{
							if (iLocal_301 == 0)
							{
								if (func_189(()(), iLocal_36[0], 1) < 20f)
								{
									if (!N_0X9072C8B49907BFAD(iLocal_36[0]))
									{
										func_197(iLocal_36[0], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_70 = GET_GAME_TIMER();
										iLocal_301 = 1;
									}
								}
							}
							else if (GET_GAME_TIMER() > iLocal_70 + 7000)
							{
								if (func_189(()(), iLocal_36[0], 1) < 20f)
								{
									if (!N_0X9072C8B49907BFAD(iLocal_36[0]))
									{
										func_197(iLocal_36[0], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_70 = GET_GAME_TIMER();
									}
								}
							}
						}
						if (iLocal_299 == 1)
						{
							if (iLocal_301 == 0)
							{
								if (func_189(()(), iLocal_36[1], 1) < 20f)
								{
									if (!N_0X9072C8B49907BFAD(iLocal_36[1]))
									{
										func_197(iLocal_36[1], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_70 = GET_GAME_TIMER();
										iLocal_301 = 1;
									}
								}
							}
							else if (GET_GAME_TIMER() > iLocal_70 + 7000)
							{
								if (func_189(()(), iLocal_36[1], 1) < 20f)
								{
									if (!N_0X9072C8B49907BFAD(iLocal_36[1]))
									{
										func_197(iLocal_36[1], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_70 = GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
			}
			if (!func_196())
			{
				if (iLocal_309 == 0)
				{
					if (GET_DISTANCE_BETWEEN_COORDS(GET_ENTITY_COORDS(()(), 1), 893.2f, -1556.5f, 30f, 1) < 18f)
					{
						if (DOES_ENTITY_EXIST(iLocal_36[0]))
						{
							if (!IS_PED_INJURED(iLocal_36[0]))
							{
								if (CAN_PED_SEE_HATED_PED(iLocal_36[0], ()()))
								{
									iLocal_65 = GET_GAME_TIMER();
									iLocal_309 = 1;
								}
							}
						}
						if (DOES_ENTITY_EXIST(iLocal_36[1]))
						{
							if (!IS_PED_INJURED(iLocal_36[1]))
							{
								if (CAN_PED_SEE_HATED_PED(iLocal_36[1], ()()))
								{
									iLocal_65 = GET_GAME_TIMER();
									iLocal_309 = 1;
								}
							}
						}
					}
				}
				if (iLocal_297 == 0)
				{
					if (DOES_ENTITY_EXIST(iLocal_36[0]))
					{
						if (!IS_PED_INJURED(iLocal_36[0]))
						{
							if (func_189(()(), iLocal_36[0], 1) > 4f)
							{
								if (CAN_PED_SEE_HATED_PED(iLocal_36[0], ()()))
								{
									if (iLocal_329[0] == 0)
									{
										if (IS_ENTITY_ON_SCREEN(iLocal_36[0]))
										{
											CLEAR_PED_TASKS(iLocal_36[0]);
										}
										else
										{
											CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[0]);
										}
										TASK_GO_TO_ENTITY(iLocal_36[0], ()(), -1, 0.5f, 2f, 1073741824, 0);
										func_199(iLocal_36[0]);
										iLocal_329[0] = 1;
									}
									iLocal_80[0] = GET_GAME_TIMER();
								}
								else if (GET_GAME_TIMER() > iLocal_80[0] + 500)
								{
									if (iLocal_330[0] == 0)
									{
										if (IS_ENTITY_ON_SCREEN(iLocal_36[0]))
										{
											CLEAR_PED_TASKS(iLocal_36[0]);
										}
										else
										{
											CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[0]);
										}
										TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_36[0], GET_ENTITY_COORDS(()(), 1), 2f, -1, 1048576000, 0, 1193033728);
										func_199(iLocal_36[0]);
										iLocal_330[0] = 1;
									}
								}
							}
							else if (iLocal_361[0] == 0)
							{
								if (IS_ENTITY_ON_SCREEN(iLocal_36[0]))
								{
									CLEAR_PED_TASKS(iLocal_36[0]);
								}
								else
								{
									CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[0]);
								}
								OPEN_SEQUENCE_TASK(&uLocal_48);
								unk_0xE95B96CFEFE7B61(0, ()(), 0);
								unk_0xFD8B5F4BB15CD71(0, 2000);
								SET_SEQUENCE_TO_REPEAT(uLocal_48, 1);
								CLOSE_SEQUENCE_TASK(uLocal_48);
								TASK_PERFORM_SEQUENCE(iLocal_36[0], uLocal_48);
								CLEAR_SEQUENCE_TASK(&uLocal_48);
								func_199(iLocal_36[0]);
								iLocal_361[0] = 1;
							}
							if (iLocal_335 == 0)
							{
								if (iLocal_326 == 0 || iLocal_302 == 1)
								{
									if (iLocal_296 == 0)
									{
										if (func_189(()(), iLocal_36[0], 1) < 10f)
										{
											if (!N_0X9072C8B49907BFAD(iLocal_36[0]))
											{
												func_197(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 1);
												iLocal_67 = GET_GAME_TIMER();
												iLocal_68 = GET_GAME_TIMER();
												iLocal_65 = GET_GAME_TIMER();
												iLocal_309 = 1;
												iLocal_296 = 1;
												iLocal_304[0] = 1;
											}
										}
									}
									else if (GET_GAME_TIMER() > iLocal_67 + 7000)
									{
										if (func_189(()(), iLocal_36[0], 1) < 10f)
										{
											if (!N_0X9072C8B49907BFAD(iLocal_36[0]))
											{
												func_197(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
												iLocal_67 = GET_GAME_TIMER();
											}
										}
									}
								}
								else if (iLocal_302 == 0)
								{
									if (iLocal_327 == 0)
									{
										if (func_189(()(), iLocal_36[0], 1) < 10f)
										{
											if (!N_0X9072C8B49907BFAD(iLocal_36[0]))
											{
												func_197(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 8);
												iLocal_296 = 1;
												iLocal_327 = 1;
											}
										}
									}
								}
							}
							else if (GET_GAME_TIMER() > iLocal_68 + 7000)
							{
								if (func_189(()(), iLocal_36[0], 1) < 15f)
								{
									if (!N_0X9072C8B49907BFAD(iLocal_36[0]))
									{
										func_197(iLocal_36[0], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
										iLocal_68 = GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (DOES_ENTITY_EXIST(iLocal_36[1]))
					{
						if (!IS_PED_INJURED(iLocal_36[1]))
						{
							if (func_189(()(), iLocal_36[1], 1) > 4f)
							{
								if (CAN_PED_SEE_HATED_PED(iLocal_36[1], ()()))
								{
									if (iLocal_329[1] == 0)
									{
										if (IS_ENTITY_ON_SCREEN(iLocal_36[1]))
										{
											CLEAR_PED_TASKS(iLocal_36[1]);
										}
										else
										{
											CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[1]);
										}
										TASK_GO_TO_ENTITY(iLocal_36[1], ()(), -1, 0.5f, 2f, 1073741824, 0);
										func_199(iLocal_36[1]);
										iLocal_329[1] = 1;
									}
									iLocal_80[1] = GET_GAME_TIMER();
								}
								else if (GET_GAME_TIMER() > iLocal_80[1] + 500)
								{
									if (iLocal_330[1] == 0)
									{
										if (IS_ENTITY_ON_SCREEN(iLocal_36[1]))
										{
											CLEAR_PED_TASKS(iLocal_36[1]);
										}
										else
										{
											CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[1]);
										}
										TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_36[1], GET_ENTITY_COORDS(()(), 1), 2f, -1, 1048576000, 0, 1193033728);
										func_199(iLocal_36[1]);
										iLocal_330[1] = 1;
									}
								}
							}
							else if (iLocal_361[1] == 0)
							{
								if (IS_ENTITY_ON_SCREEN(iLocal_36[1]))
								{
									CLEAR_PED_TASKS(iLocal_36[1]);
								}
								else
								{
									CLEAR_PED_TASKS_IMMEDIATELY(iLocal_36[1]);
								}
								OPEN_SEQUENCE_TASK(&uLocal_48);
								unk_0xE95B96CFEFE7B61(0, ()(), 0);
								unk_0xFD8B5F4BB15CD71(0, 2000);
								SET_SEQUENCE_TO_REPEAT(uLocal_48, 1);
								CLOSE_SEQUENCE_TASK(uLocal_48);
								TASK_PERFORM_SEQUENCE(iLocal_36[1], uLocal_48);
								CLEAR_SEQUENCE_TASK(&uLocal_48);
								func_199(iLocal_36[1]);
								iLocal_361[1] = 1;
							}
							if (iLocal_335 == 0)
							{
								if (iLocal_326 == 0 || iLocal_302 == 1)
								{
									if (iLocal_296 == 0)
									{
										if (func_189(()(), iLocal_36[1], 1) < 10f)
										{
											if (!N_0X9072C8B49907BFAD(iLocal_36[1]))
											{
												func_197(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_67 = GET_GAME_TIMER();
												iLocal_69 = GET_GAME_TIMER();
												iLocal_65 = GET_GAME_TIMER();
												iLocal_309 = 1;
												iLocal_296 = 1;
												iLocal_304[1] = 1;
											}
										}
									}
									else if (GET_GAME_TIMER() > iLocal_67 + 7000)
									{
										if (func_189(()(), iLocal_36[1], 1) < 10f)
										{
											if (!N_0X9072C8B49907BFAD(iLocal_36[1]))
											{
												func_197(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
												iLocal_67 = GET_GAME_TIMER();
											}
										}
									}
								}
								else if (iLocal_302 == 0)
								{
									if (iLocal_327 == 0)
									{
										if (func_189(()(), iLocal_36[1], 1) < 10f)
										{
											if (!N_0X9072C8B49907BFAD(iLocal_36[1]))
											{
												func_197(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 8);
												iLocal_296 = 1;
												iLocal_327 = 1;
											}
										}
									}
								}
							}
							else if (GET_GAME_TIMER() > iLocal_69 + 7000)
							{
								if (func_189(()(), iLocal_36[1], 1) < 10f)
								{
									if (!N_0X9072C8B49907BFAD(iLocal_36[1]))
									{
										func_197(iLocal_36[1], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
										iLocal_69 = GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (iLocal_309 == 1)
					{
						if (iLocal_335 == 0)
						{
							if (GET_GAME_TIMER() > iLocal_65 + 22000)
							{
								iLocal_335 = 1;
							}
						}
					}
					if (iLocal_309 == 1)
					{
						if (iLocal_297 == 0)
						{
							if (GET_GAME_TIMER() > iLocal_65 + 30000)
							{
								SET_PLAYER_WANTED_LEVEL(()(), 2, 0);
								iLocal_297 = 1;
							}
						}
					}
					if (DOES_ENTITY_EXIST(iLocal_33))
					{
						if (IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
						{
							if (IS_PED_IN_VEHICLE(()(), iLocal_33, 1))
							{
								if (CAN_PED_SEE_HATED_PED(iLocal_36[0], ()()) || CAN_PED_SEE_HATED_PED(iLocal_36[1], ()()))
								{
									iLocal_297 = 1;
								}
							}
							if (func_189(()(), iLocal_33, 1) < 5f && IS_PED_GETTING_INTO_A_VEHICLE(()()))
							{
								if (CAN_PED_SEE_HATED_PED(iLocal_36[0], ()()) || CAN_PED_SEE_HATED_PED(iLocal_36[1], ()()))
								{
									iLocal_297 = 1;
								}
							}
						}
					}
					if (DOES_ENTITY_EXIST(iLocal_36[0]))
					{
						if (!IS_PED_INJURED(iLocal_36[0]))
						{
							if (IS_PED_IN_MELEE_COMBAT(()()))
							{
								if (IS_PED_PERFORMING_MELEE_ACTION(()()))
								{
									if (CAN_PED_SEE_HATED_PED(iLocal_36[0], ()()))
									{
										iLocal_297 = 1;
									}
								}
							}
						}
					}
					if (DOES_ENTITY_EXIST(iLocal_36[1]))
					{
						if (!IS_PED_INJURED(iLocal_36[1]))
						{
							if (IS_PED_IN_MELEE_COMBAT(()()))
							{
								if (IS_PED_PERFORMING_MELEE_ACTION(()()))
								{
									if (CAN_PED_SEE_HATED_PED(iLocal_36[1], ()()))
									{
										iLocal_297 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_196()
{
	if (!IS_PED_IN_ANY_VEHICLE(()(), 0))
	{
		iLocal_64 = 0;
		while (iLocal_64 <= 6)
		{
			if (DOES_ENTITY_EXIST(iLocal_35[iLocal_64]))
			{
				if (!IS_PED_INJURED(iLocal_35[iLocal_64]))
				{
					if (func_201(()()) != joaat("weapon_unarmed") && !func_200(0))
					{
						if (CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_64], ()()))
						{
							return 1;
						}
					}
				}
			}
			iLocal_64++;
		}
		if (DOES_ENTITY_EXIST(iLocal_36[0]))
		{
			if (!IS_PED_INJURED(iLocal_36[0]))
			{
				if (func_201(()()) != joaat("weapon_unarmed") && !func_200(0))
				{
					if (CAN_PED_SEE_HATED_PED(iLocal_36[0], ()()))
					{
						return 1;
					}
				}
			}
		}
		if (DOES_ENTITY_EXIST(iLocal_36[1]))
		{
			if (!IS_PED_INJURED(iLocal_36[1]))
			{
				if (func_201(()()) != joaat("weapon_unarmed") && !func_200(0))
				{
					if (CAN_PED_SEE_HATED_PED(iLocal_36[1], ()()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_197(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	N_0X3523634255FC3318(uParam0, sParam1, sParam2, func_198(iParam3), 0);
}

int func_198(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_199(int iParam0)
{
	if (iParam0 == iLocal_36[0])
	{
		iLocal_328[0] = 0;
		iLocal_340[0] = 0;
		iLocal_341[0] = 0;
		iLocal_334[0] = 0;
		iLocal_331[0] = 0;
		iLocal_333[0] = 0;
		iLocal_329[0] = 0;
		iLocal_330[0] = 0;
		iLocal_361[0] = 0;
	}
	if (iParam0 == iLocal_36[1])
	{
		iLocal_328[1] = 0;
		iLocal_340[1] = 0;
		iLocal_341[1] = 0;
		iLocal_334[1] = 0;
		iLocal_331[1] = 0;
		iLocal_333[1] = 0;
		iLocal_329[1] = 0;
		iLocal_330[1] = 0;
		iLocal_361[1] = 0;
	}
}

int func_200(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20383.f_1 > 3)
		{
			if (BitTest(Global_8253, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20383.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_201(int iParam0)
{
	var uVar0;
	
	GET_CURRENT_PED_WEAPON(iParam0, &uVar0, 1);
	return uVar0;
}

void func_202()
{
	if (DOES_ENTITY_EXIST(()()))
	{
		if (!IS_PED_INJURED(()()))
		{
			Local_93 = { GET_ENTITY_COORDS(()(), 1) };
		}
	}
	if (DOES_ENTITY_EXIST(iLocal_36[0]))
	{
		if (!IS_PED_INJURED(iLocal_36[0]))
		{
			Local_95[0 /*3*/] = { GET_ENTITY_COORDS(iLocal_36[0], 1) };
		}
	}
	if (DOES_ENTITY_EXIST(iLocal_36[1]))
	{
		if (!IS_PED_INJURED(iLocal_36[1]))
		{
			Local_95[1 /*3*/] = { GET_ENTITY_COORDS(iLocal_36[1], 1) };
		}
	}
	if (DOES_ENTITY_EXIST(iLocal_36[0]))
	{
		if (!IS_PED_INJURED(iLocal_36[0]))
		{
			iLocal_303[0] = 1;
		}
		else
		{
			iLocal_303[0] = 0;
		}
	}
	else
	{
		iLocal_303[0] = 0;
	}
	if (DOES_ENTITY_EXIST(iLocal_36[1]))
	{
		if (!IS_PED_INJURED(iLocal_36[1]))
		{
			iLocal_303[1] = 1;
		}
		else
		{
			iLocal_303[1] = 0;
		}
	}
	else
	{
		iLocal_303[1] = 0;
	}
	if (iLocal_31 != 0)
	{
		if (iLocal_31 == 1)
		{
			if (iLocal_303[0] == 1)
			{
				if (iLocal_303[1] == 1)
				{
					if (func_189(()(), iLocal_36[0], 1) < func_189(()(), iLocal_36[1], 1))
					{
						if (func_189(()(), iLocal_36[0], 1) < 20f)
						{
							if (((Local_93.f_0 < Local_95[0 /*3*/] && !IS_PED_FACING_PED(()(), iLocal_36[0], 90f)) && !IS_ENTITY_IN_ANGLED_AREA(()(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0)) && !IS_ENTITY_IN_ANGLED_AREA(()(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
							{
								iLocal_31 = 0;
								iLocal_340[0] = 0;
								iLocal_341[0] = 0;
								iLocal_340[1] = 0;
								iLocal_341[1] = 0;
								iLocal_83[0] = GET_GAME_TIMER();
								iLocal_83[1] = GET_GAME_TIMER();
							}
						}
						else if (Local_93.f_0 < Local_95[0 /*3*/])
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = GET_GAME_TIMER();
							iLocal_83[1] = GET_GAME_TIMER();
						}
					}
					else if (func_189(()(), iLocal_36[1], 1) < 15f)
					{
						if ((Local_93.f_0 > Local_95[1 /*3*/] && !IS_PED_FACING_PED(()(), iLocal_36[1], 90f)) && !IS_ENTITY_IN_ANGLED_AREA(()(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = GET_GAME_TIMER();
							iLocal_83[1] = GET_GAME_TIMER();
						}
					}
					else if (Local_93.f_0 > Local_95[1 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_340[0] = 0;
						iLocal_341[0] = 0;
						iLocal_340[1] = 0;
						iLocal_341[1] = 0;
						iLocal_83[0] = GET_GAME_TIMER();
						iLocal_83[1] = GET_GAME_TIMER();
					}
				}
				else if (func_189(()(), iLocal_36[0], 1) < func_189(()(), iLocal_36[1], 1))
				{
					if (func_189(()(), iLocal_36[0], 1) < 15f)
					{
						if ((Local_93.f_0 < Local_95[0 /*3*/] && !IS_PED_FACING_PED(()(), iLocal_36[0], 90f)) && !IS_ENTITY_IN_ANGLED_AREA(()(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = GET_GAME_TIMER();
							iLocal_83[1] = GET_GAME_TIMER();
						}
					}
					else if (Local_93.f_0 < Local_95[0 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_340[0] = 0;
						iLocal_341[0] = 0;
						iLocal_340[1] = 0;
						iLocal_341[1] = 0;
						iLocal_83[0] = GET_GAME_TIMER();
						iLocal_83[1] = GET_GAME_TIMER();
					}
				}
			}
			else if (iLocal_303[1] == 1)
			{
				if (func_189(()(), iLocal_36[1], 1) < 15f)
				{
					if ((Local_93.f_0 > Local_95[1 /*3*/] && !IS_PED_FACING_PED(()(), iLocal_36[1], 90f)) && !IS_ENTITY_IN_ANGLED_AREA(()(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
					{
						iLocal_31 = 0;
						iLocal_340[0] = 0;
						iLocal_341[0] = 0;
						iLocal_340[1] = 0;
						iLocal_341[1] = 0;
						iLocal_83[0] = GET_GAME_TIMER();
						iLocal_83[1] = GET_GAME_TIMER();
					}
				}
				else if (Local_93.f_0 > Local_95[1 /*3*/])
				{
					iLocal_31 = 0;
					iLocal_340[0] = 0;
					iLocal_341[0] = 0;
					iLocal_340[1] = 0;
					iLocal_341[1] = 0;
					iLocal_83[0] = GET_GAME_TIMER();
					iLocal_83[1] = GET_GAME_TIMER();
				}
			}
		}
		if (iLocal_31 == 2)
		{
			if (iLocal_297 == 0)
			{
				if (IS_ENTITY_IN_ANGLED_AREA(()(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0) || Local_93.f_0 > 942f)
				{
					if (!IS_PED_INJURED(iLocal_36[1]))
					{
						if (Local_93.f_0 > Local_95[1 /*3*/])
						{
							if (!IS_PED_FACING_PED(()(), iLocal_36[1], 90f))
							{
								iLocal_31 = 0;
								iLocal_340[0] = 0;
								iLocal_341[0] = 0;
								iLocal_340[1] = 0;
								iLocal_341[1] = 0;
								iLocal_83[0] = GET_GAME_TIMER();
								iLocal_83[1] = GET_GAME_TIMER();
							}
						}
					}
					else if (Local_93.f_0 > 942f)
					{
						if (!IS_PED_FACING_PED(()(), iLocal_36[1], 90f))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = GET_GAME_TIMER();
							iLocal_83[1] = GET_GAME_TIMER();
						}
					}
				}
				if (IS_ENTITY_IN_ANGLED_AREA(()(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0) || Local_93.f_0 < 860f)
				{
					if (!IS_PED_INJURED(iLocal_36[0]))
					{
						if (Local_93.f_0 < Local_95[0 /*3*/])
						{
							if (!IS_PED_FACING_PED(()(), iLocal_36[0], 90f))
							{
								iLocal_31 = 0;
								iLocal_340[0] = 0;
								iLocal_341[0] = 0;
								iLocal_340[1] = 0;
								iLocal_341[1] = 0;
								iLocal_83[0] = GET_GAME_TIMER();
								iLocal_83[1] = GET_GAME_TIMER();
							}
						}
					}
					else if (Local_93.f_0 < 860f)
					{
						if (!IS_PED_FACING_PED(()(), iLocal_36[0], 90f))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = GET_GAME_TIMER();
							iLocal_83[1] = GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 1)
	{
		if (iLocal_31 != 2)
		{
			if (iLocal_303[0] == 1)
			{
				if (func_189(()(), iLocal_36[0], 1) < 20f)
				{
					if ((func_201(()()) == joaat("weapon_unarmed") || IS_PED_IN_ANY_VEHICLE(()(), 0)) || func_200(0))
					{
						if (IS_ENTITY_IN_ANGLED_AREA(()(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, 1, 0))
						{
							if (Local_93.f_0 > Local_95[0 /*3*/] || IS_PED_FACING_PED(()(), iLocal_36[0], 90f))
							{
								iLocal_31 = 1;
							}
						}
						if (IS_ENTITY_IN_ANGLED_AREA(()(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, 1, 0))
						{
							iLocal_31 = 1;
						}
					}
				}
			}
			if (iLocal_303[1] == 1)
			{
				if (func_189(()(), iLocal_36[1], 1) < 15f)
				{
					if ((func_201(()()) == joaat("weapon_unarmed") || IS_PED_IN_ANY_VEHICLE(()(), 0)) || func_200(0))
					{
						if (IS_ENTITY_IN_ANGLED_AREA(()(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, 1, 0))
						{
							if (Local_93.f_0 < Local_95[1 /*3*/] || IS_PED_FACING_PED(()(), iLocal_36[1], 90f))
							{
								iLocal_31 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 2)
	{
		if (IS_EXPLOSION_IN_SPHERE(-1, 892.9f, -1552.4f, 30f, 40f))
		{
			iLocal_31 = 2;
			iLocal_297 = 1;
		}
		if (iLocal_359 == 1)
		{
			iLocal_31 = 2;
			iLocal_297 = 1;
		}
		if (GET_PLAYER_WANTED_LEVEL(()()) != 0)
		{
			if (DOES_ENTITY_EXIST(iLocal_36[0]))
			{
				if (!IS_PED_INJURED(iLocal_36[0]))
				{
					if (CAN_PED_SEE_HATED_PED(iLocal_36[0], ()()))
					{
						iLocal_31 = 2;
						iLocal_297 = 1;
					}
				}
			}
			if (DOES_ENTITY_EXIST(iLocal_36[1]))
			{
				if (!IS_PED_INJURED(iLocal_36[1]))
				{
					if (CAN_PED_SEE_HATED_PED(iLocal_36[1], ()()))
					{
						iLocal_31 = 2;
						iLocal_297 = 1;
					}
				}
			}
		}
		if (iLocal_326 == 0)
		{
			if (iLocal_325 == 1)
			{
				if (GET_GAME_TIMER() > iLocal_79 + 4000)
				{
					iLocal_78 = 0;
					while (iLocal_78 <= 6)
					{
						if (func_194())
						{
							if (DOES_ENTITY_EXIST(iLocal_35[iLocal_78]))
							{
								if (!IS_PED_INJURED(iLocal_35[iLocal_78]))
								{
									if (N_0X049E937F18F4020C(iLocal_35[iLocal_78]))
									{
										iLocal_31 = 2;
										iLocal_326 = 1;
									}
								}
							}
						}
						iLocal_78++;
					}
				}
			}
		}
		if ((iLocal_29 == 4 || iLocal_29 == 3) || iLocal_325 == 1)
		{
			iLocal_31 = 2;
			iLocal_322 = 1;
			iLocal_297 = 1;
		}
		if (!IS_PED_IN_ANY_VEHICLE(()(), 0))
		{
			if (iLocal_303[0] == 1)
			{
				if (func_201(()()) != joaat("weapon_unarmed") && !func_200(0))
				{
					if (CAN_PED_SEE_HATED_PED(iLocal_36[0], ()()))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_303[1] == 1)
			{
				if (func_201(()()) != joaat("weapon_unarmed") && !func_200(0))
				{
					if (CAN_PED_SEE_HATED_PED(iLocal_36[1], ()()))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (GET_DISTANCE_BETWEEN_COORDS(Local_93, Local_96, 1) < 36f)
		{
			if (iLocal_303[0] == 1)
			{
				if (CAN_PED_SEE_HATED_PED(iLocal_36[0], ()()))
				{
					iLocal_31 = 2;
				}
				if (func_189(iLocal_36[0], ()(), 1) < 20f)
				{
					if (CAN_PED_HEAR_PLAYER(()(), iLocal_36[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_303[1] == 1)
			{
				if (Local_93.f_2 < 36f || IS_PED_IN_ANY_VEHICLE(()(), 0))
				{
					if (CAN_PED_SEE_HATED_PED(iLocal_36[1], ()()))
					{
						iLocal_31 = 2;
					}
					if (func_189(iLocal_36[1], ()(), 1) < 20f)
					{
						if (CAN_PED_HEAR_PLAYER(()(), iLocal_36[1]))
						{
							iLocal_31 = 2;
						}
					}
				}
			}
		}
		if (iLocal_303[0] == 1)
		{
			if (func_189(()(), iLocal_36[0], 1) < 20f)
			{
				if (Local_93.f_0 > Local_95[0 /*3*/] && IS_ENTITY_IN_ANGLED_AREA(()(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, 1, 0))
				{
					if (CAN_PED_SEE_HATED_PED(iLocal_36[0], ()()) || CAN_PED_HEAR_PLAYER(()(), iLocal_36[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (iLocal_303[1] == 1)
		{
			if (func_189(()(), iLocal_36[1], 1) < 20f)
			{
				if (Local_93.f_0 < Local_95[1 /*3*/] && IS_ENTITY_IN_ANGLED_AREA(()(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, 1, 0))
				{
					if (CAN_PED_SEE_HATED_PED(iLocal_36[1], ()()) || CAN_PED_HEAR_PLAYER(()(), iLocal_36[1]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
	}
}

void func_203()
{
	iLocal_55 = 0;
	while (iLocal_55 <= 6)
	{
		if (DOES_ENTITY_EXIST(iLocal_35[iLocal_55]))
		{
			if (!IS_PED_INJURED(iLocal_35[iLocal_55]))
			{
				if (iLocal_278[iLocal_55] == 0)
				{
					if (func_189(()(), iLocal_35[iLocal_55], 1) > 20f)
					{
						iLocal_278[iLocal_55] = 1;
					}
				}
				if (iLocal_278[iLocal_55] == 1)
				{
					if (func_189(()(), iLocal_35[iLocal_55], 1) < 20f)
					{
						iLocal_278[iLocal_55] = 0;
					}
				}
			}
			else if (iLocal_278[iLocal_55] == 0)
			{
				iLocal_278[iLocal_55] = 1;
			}
		}
		else if (iLocal_278[iLocal_55] == 0)
		{
			iLocal_278[iLocal_55] = 1;
		}
		iLocal_55++;
	}
	if (((((iLocal_278[0] == 1 && iLocal_278[1] == 1) && iLocal_278[2] == 1) && iLocal_278[3] == 1) && iLocal_278[4] == 1) && iLocal_278[5] == 1)
	{
		iLocal_279 = 1;
	}
	else
	{
		iLocal_279 = 0;
	}
	iLocal_54 = 0;
	while (iLocal_54 <= 6)
	{
		if (DOES_ENTITY_EXIST(iLocal_35[iLocal_54]))
		{
			if (!IS_PED_INJURED(iLocal_35[iLocal_54]))
			{
				func_208(iLocal_35[iLocal_54]);
				if (iLocal_28 == 3 || iLocal_28 == 4)
				{
					if (iLocal_31 == 2 && iLocal_29 == 0)
					{
						func_207(1);
						if (iLocal_311 == 1)
						{
							func_127();
						}
					}
					if (HAS_PED_RECEIVED_EVENT(iLocal_35[iLocal_54], 18))
					{
						if (iLocal_29 != 4)
						{
							func_207(4);
							if (iLocal_311 == 1)
							{
								func_205();
							}
							iLocal_359 = 1;
						}
					}
					if (iLocal_29 != 4)
					{
						if (IS_EXPLOSION_IN_SPHERE(-1, 892.9f, -1552.4f, 30f, 40f))
						{
							func_207(4);
							if (iLocal_311 == 1)
							{
								func_205();
							}
						}
					}
					if ((((((((func_204(iLocal_35[iLocal_54], iLocal_35[0]) || func_204(iLocal_35[iLocal_54], iLocal_35[1])) || func_204(iLocal_35[iLocal_54], iLocal_35[2])) || func_204(iLocal_35[iLocal_54], iLocal_35[3])) || func_204(iLocal_35[iLocal_54], iLocal_35[4])) || func_204(iLocal_35[iLocal_54], iLocal_35[5])) || func_204(iLocal_35[iLocal_54], iLocal_35[6])) || func_204(iLocal_35[iLocal_54], iLocal_36[0])) || func_204(iLocal_35[iLocal_54], iLocal_36[1]))
					{
						if (iLocal_29 != 4)
						{
							func_207(4);
							if (iLocal_311 == 1)
							{
								func_205();
							}
							iLocal_359 = 1;
						}
					}
					if ((func_201(()()) == joaat("weapon_unarmed") || IS_PED_IN_ANY_VEHICLE(()(), 1)) || func_200(0))
					{
						if (iLocal_297 == 0)
						{
							if (func_189(()(), iLocal_35[iLocal_54], 1) > 20f)
							{
								if (iLocal_277[iLocal_54] == 1)
								{
									iLocal_277[iLocal_54] = 0;
								}
								if (((((iLocal_279 == 1 && iLocal_29 != 0) && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4) && iLocal_31 != 2)
								{
									func_207(0);
								}
							}
							if (func_189(()(), iLocal_35[iLocal_54], 1) < 20f && CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_54], ()()))
							{
								if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
								{
									if (iLocal_326 == 0 && iLocal_297 == 0)
									{
										func_207(1);
										if (iLocal_311 == 1)
										{
											func_127();
										}
									}
									else
									{
										func_207(3);
										if (iLocal_311 == 1)
										{
											func_205();
										}
									}
								}
							}
							if (func_189(()(), iLocal_35[iLocal_54], 1) < 20f && CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_54], ()()))
							{
								if (iLocal_277[iLocal_54] == 0)
								{
									iLocal_60[iLocal_54] = GET_GAME_TIMER();
									iLocal_277[iLocal_54] = 1;
								}
								if (iLocal_277[iLocal_54] == 1)
								{
									if (GET_GAME_TIMER() > iLocal_60[iLocal_54] + 24000)
									{
										if ((iLocal_29 != 2 && iLocal_29 != 3) && iLocal_29 != 4)
										{
											func_207(2);
											if (iLocal_311 == 1)
											{
												func_205();
											}
										}
									}
								}
							}
						}
						if (iLocal_297 == 1)
						{
							if (func_189(()(), iLocal_35[iLocal_54], 1) < 20f && CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_54], ()()))
							{
								if (iLocal_29 != 3 && iLocal_29 != 4)
								{
									func_207(3);
									if (iLocal_311 == 1)
									{
										func_205();
									}
								}
							}
						}
						if (IS_PED_IN_MELEE_COMBAT(()()))
						{
							if (iLocal_308 == 0)
							{
								iLocal_74 = GET_GAME_TIMER();
								iLocal_308 = 1;
							}
							else if (GET_GAME_TIMER() > iLocal_74 + 3000)
							{
								if (func_189(()(), iLocal_35[iLocal_54], 1) < 20f && CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_54], ()()))
								{
									if (iLocal_29 != 3 && iLocal_29 != 4)
									{
										func_207(3);
										if (iLocal_311 == 1)
										{
											func_205();
										}
									}
								}
							}
						}
						else if (iLocal_308 == 1)
						{
							iLocal_308 = 0;
						}
						if (DOES_ENTITY_EXIST(iLocal_33))
						{
							if (IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
							{
								if (IS_PED_IN_VEHICLE(()(), iLocal_33, 1))
								{
									if (CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_54], ()()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_289 = 1;
											func_207(3);
											if (iLocal_311 == 1)
											{
												func_205();
											}
										}
									}
								}
								if (func_189(()(), iLocal_33, 1) < 5f && IS_PED_GETTING_INTO_A_VEHICLE(()()))
								{
									if (CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_54], ()()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_289 = 1;
											func_207(3);
											if (iLocal_311 == 1)
											{
												func_205();
											}
										}
									}
									if (IS_ENTITY_IN_ANGLED_AREA(()(), 917.3436f, -1554.42f, 29.26611f, 916.8774f, -1556.441f, 33.00661f, 2.25f, 0, 1, 0))
									{
										if (DOES_ENTITY_EXIST(iLocal_35[0]))
										{
											if (!IS_PED_INJURED(iLocal_35[0]))
											{
												if (IS_ENTITY_AT_COORD(iLocal_35[0], 912.3f, -1542.6f, 30f, 3f, 3f, 3f, 0, 1, 0))
												{
													if (iLocal_29 != 3 && iLocal_29 != 4)
													{
														iLocal_289 = 1;
														func_207(3);
														if (iLocal_311 == 1)
														{
															func_205();
														}
													}
												}
											}
										}
									}
								}
							}
						}
						if (DOES_ENTITY_EXIST(iLocal_35[6]))
						{
							if (!IS_PED_INJURED(iLocal_35[6]))
							{
								if (func_189(()(), iLocal_35[6], 1) < 20f)
								{
									if ((IS_ENTITY_IN_ANGLED_AREA(()(), 928.7163f, -1546.671f, 27.34603f, 921.8971f, -1549.752f, 34.04724f, 6.25f, 0, 1, 0) || IS_ENTITY_IN_ANGLED_AREA(()(), 931.868f, -1545.185f, 27.3653f, 925.8857f, -1547.303f, 34.07205f, 3.5f, 0, 1, 0)) || IS_ENTITY_IN_ANGLED_AREA(()(), 929.4908f, -1524.829f, 32.84098f, 929.3696f, -1545.288f, 37.34258f, 5f, 0, 1, 0))
									{
										if (CAN_PED_SEE_HATED_PED(iLocal_35[6], ()()))
										{
											if (Local_93.f_2 > 31f)
											{
												if (iLocal_29 != 3 && iLocal_29 != 4)
												{
													iLocal_323 = 1;
													func_207(3);
													if (iLocal_311 == 1)
													{
														func_205();
													}
												}
											}
											else if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
											{
												func_207(1);
												if (iLocal_311 == 1)
												{
													func_127();
												}
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if (iLocal_276 == 0)
						{
							iLocal_59 = GET_GAME_TIMER();
							iLocal_276 = 1;
						}
						if (iLocal_276 == 1)
						{
							if (GET_GAME_TIMER() > iLocal_59 + 4000 || iLocal_29 == 3)
							{
								if (func_189(()(), iLocal_35[iLocal_54], 1) < 20f)
								{
									if (CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_54], ()()))
									{
										if (iLocal_29 != 4)
										{
											func_207(4);
											if (iLocal_311 == 1)
											{
												func_205();
											}
										}
									}
								}
							}
						}
						if (func_189(()(), iLocal_35[iLocal_54], 1) < 40f)
						{
							if (IS_PED_SHOOTING(()()))
							{
								if (CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_54], ()()) || CAN_PED_HEAR_PLAYER(()(), iLocal_35[iLocal_54]))
								{
									if (iLocal_29 != 4)
									{
										func_207(4);
										if (iLocal_311 == 1)
										{
											func_205();
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_54++;
	}
}

int func_204(int iParam0, int iParam1)
{
	if (((func_189(iParam0, iParam1, 1) < 20f && IS_PED_FACING_PED(iParam0, iParam1, 90f)) && !IS_PED_INJURED(iParam0)) && IS_PED_INJURED(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_205()
{
	Global_20591 = 0;
	func_206();
}

void func_206()
{
	N_0X9AEB285D1818C9AC();
	Global_22736 = 0;
	if (N_0X16754C556D2EDE3D())
	{
		unk_0xF15249D24BC5ADA(0);
		Global_21725 = 6;
	}
}

void func_207(int iParam0)
{
	iLocal_29 = iParam0;
	iLocal_58 = 0;
}

void func_208(int iParam0)
{
	iLocal_56 = 0;
	while (iLocal_56 <= 6)
	{
		if (iParam0 == iLocal_35[iLocal_56])
		{
			if (func_189(()(), iParam0, 1) < 20f && CAN_PED_SEE_HATED_PED(iParam0, ()()))
			{
				if (iLocal_280[iLocal_56] == 0)
				{
					TASK_LOOK_AT_ENTITY(iParam0, ()(), -1, 1072, 3);
					iLocal_280[iLocal_56] = 1;
				}
			}
			else if (iLocal_280[iLocal_56] == 1)
			{
				TASK_LOOK_AT_ENTITY(iParam0, ()(), 1, 1072, 3);
				iLocal_280[iLocal_56] = 0;
			}
		}
		iLocal_56++;
	}
	switch (iLocal_29)
	{
		case 0:
			if (iLocal_58 == 0)
			{
				SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
				if (iParam0 == iLocal_35[0])
				{
					if (DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, 0))
					{
						if (GET_SCRIPT_TASK_STATUS(iLocal_35[0], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[0], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
						{
							TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[1])
				{
					if (DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, 0))
					{
						if (GET_SCRIPT_TASK_STATUS(iLocal_35[1], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[1], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
						{
							TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[2])
				{
					if (DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, 0))
					{
						if (GET_SCRIPT_TASK_STATUS(iLocal_35[2], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[2], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
						{
							TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[3])
				{
					if (DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, 0))
					{
						if (GET_SCRIPT_TASK_STATUS(iLocal_35[3], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[3], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
						{
							TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[4])
				{
					if (DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, 0))
					{
						if (GET_SCRIPT_TASK_STATUS(iLocal_35[4], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[4], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
						{
							TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[5])
				{
					if (DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, 0))
					{
						if (GET_SCRIPT_TASK_STATUS(iLocal_35[5], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[5], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
						{
							TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, 0))
					{
						if (GET_SCRIPT_TASK_STATUS(iLocal_35[6], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[6], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
						{
							TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
						}
					}
				}
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				if (DOES_ENTITY_EXIST(iLocal_35[4]))
				{
					if (!IS_PED_INJURED(iLocal_35[4]))
					{
						if (DOES_ENTITY_EXIST(iLocal_35[5]))
						{
							if (!IS_PED_INJURED(iLocal_35[5]))
							{
								if (func_189(()(), iLocal_35[4], 1) < 25f)
								{
									if (IS_ENTITY_IN_ANGLED_AREA(()(), 926.455f, -1582.384f, 29.32759f, 909.6322f, -1581.374f, 31.58907f, 9.5f, 0, 1, 0) || Local_93.f_1 > -1573f)
									{
										if (iLocal_311 == 0)
										{
											func_150(&uLocal_99, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
											func_150(&uLocal_99, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
											TASK_LOOK_AT_ENTITY(iLocal_35[4], iLocal_35[5], -1, 0, 2);
											TASK_LOOK_AT_ENTITY(iLocal_35[5], iLocal_35[4], -1, 0, 2);
											if (!func_194())
											{
												if (!IS_MESSAGE_BEING_DISPLAYED() || !IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (func_188(&uLocal_99, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
													{
														iLocal_311 = 1;
													}
												}
											}
										}
									}
								}
								if (IS_ENTITY_AT_COORD(()(), 921.9f, -1556.5f, 30f, 5f, 5f, 5f, 0, 1, 1))
								{
									if (iLocal_318 == 0)
									{
										iLocal_76 = GET_GAME_TIMER();
										iLocal_318 = 1;
									}
									if (iLocal_318 == 1)
									{
										if (GET_GAME_TIMER() > iLocal_76 + 4000)
										{
											if (iLocal_311 == 0)
											{
												func_150(&uLocal_99, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
												func_150(&uLocal_99, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
												TASK_LOOK_AT_ENTITY(iLocal_35[4], iLocal_35[5], -1, 0, 2);
												TASK_LOOK_AT_ENTITY(iLocal_35[5], iLocal_35[4], -1, 0, 2);
												if (!func_194())
												{
													if (!IS_MESSAGE_BEING_DISPLAYED() || !IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
													{
														if (func_188(&uLocal_99, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
														{
															iLocal_311 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_311 == 1 && !func_194())
								{
									if (iLocal_310 == 0)
									{
										if (DOES_SCENARIO_EXIST_IN_AREA(865f, -1558.1f, 29.5f, 3f, 0))
										{
											TASK_CLEAR_LOOK_AT(iLocal_35[4]);
											TASK_CLEAR_LOOK_AT(iLocal_35[5]);
											TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_35[4], 865f, -1558.1f, 29.5f, 3f, 0);
											iLocal_310 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (iLocal_319 == 0)
					{
						if (iLocal_320 == 0)
						{
							iLocal_77 = GET_GAME_TIMER();
							iLocal_320 = 1;
						}
						if (GET_GAME_TIMER() > iLocal_77 + 30000)
						{
							if (iLocal_319 == 0)
							{
								if (DOES_SCENARIO_EXIST_IN_AREA(925f, -1561f, 30f, 3f, 0))
								{
									TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_35[6], 925f, -1561f, 30f, 3f, 0);
									iLocal_319 = 1;
									iLocal_320 = 0;
								}
							}
						}
					}
					if (iLocal_319 == 1)
					{
						if (IS_ENTITY_AT_COORD(iLocal_35[6], 925f, -1561f, 30f, 3f, 3f, 3f, 0, 1, 0))
						{
							if (func_189(()(), iLocal_35[6], 1) < 15f && Local_93.f_2 < 40f)
							{
								if (iLocal_321 == 0)
								{
									if (DOES_SCENARIO_EXIST_IN_AREA(909.5f, -1515.5f, 30f, 3f, 0))
									{
										TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[6], 909.5f, -1515.5f, 30f, 50f, 0);
										iLocal_321 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_58 == 0)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iLocal_31 == 0)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (func_189(()(), iParam0, 1) < 20f)
							{
								if (iLocal_281[iLocal_56] == 0)
								{
									if (CAN_PED_SEE_HATED_PED(iParam0, ()()) || CAN_PED_HEAR_PLAYER(()(), iParam0))
									{
										if (!IS_ENTITY_ON_SCREEN(iParam0))
										{
											CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
										}
										if (IS_ENTITY_ON_SCREEN(iParam0))
										{
											CLEAR_PED_TASKS(iParam0);
										}
										OPEN_SEQUENCE_TASK(&uLocal_48);
										TASK_GO_TO_ENTITY(0, ()(), -1, 2f, 1f, 1073741824, 0);
										unk_0xE95B96CFEFE7B61(0, ()(), 0);
										CLOSE_SEQUENCE_TASK(uLocal_48);
										TASK_PERFORM_SEQUENCE(iParam0, uLocal_48);
										CLEAR_SEQUENCE_TASK(&uLocal_48);
										SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
										iLocal_280[iLocal_56] = 0;
										iLocal_281[iLocal_56] = 1;
									}
								}
								if (iLocal_281[iLocal_56] == 1)
								{
									if (!IS_PED_FACING_PED(iParam0, ()(), 45f))
									{
										unk_0xE95B96CFEFE7B61(iParam0, ()(), 0);
										iLocal_281[iLocal_56] = 0;
									}
								}
							}
							else
							{
								if (iLocal_281[iLocal_56] == 1)
								{
									iLocal_281[iLocal_56] = 0;
								}
								if (iParam0 == iLocal_35[0])
								{
									if (DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, 0))
									{
										if (GET_SCRIPT_TASK_STATUS(iLocal_35[0], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[0], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
										{
											TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
											SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[0], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[1])
								{
									if (DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, 0))
									{
										if (GET_SCRIPT_TASK_STATUS(iLocal_35[1], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[1], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
										{
											TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
											SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[1], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[2])
								{
									if (DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, 0))
									{
										if (GET_SCRIPT_TASK_STATUS(iLocal_35[2], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[2], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
										{
											TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
											SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[2], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[3])
								{
									if (DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, 0))
									{
										if (GET_SCRIPT_TASK_STATUS(iLocal_35[3], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[3], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
										{
											TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
											SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[3], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[4])
								{
									if (DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, 0))
									{
										if (GET_SCRIPT_TASK_STATUS(iLocal_35[4], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[4], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
										{
											TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
											SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[4], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[5])
								{
									if (DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, 0))
									{
										if (GET_SCRIPT_TASK_STATUS(iLocal_35[5], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[5], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
										{
											TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
											SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[5], 1);
										}
									}
								}
								if (iParam0 == iLocal_35[6])
								{
									if (DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, 0))
									{
										if (GET_SCRIPT_TASK_STATUS(iLocal_35[6], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[6], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
										{
											TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
											SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[6], 1);
										}
									}
								}
							}
						}
					}
					else if (iParam0 == iLocal_35[iLocal_56])
					{
						if (func_189(()(), iParam0, 1) < 20f)
						{
							if (iLocal_281[iLocal_56] == 0)
							{
								if (CAN_PED_SEE_HATED_PED(iParam0, ()()) || CAN_PED_HEAR_PLAYER(()(), iParam0))
								{
									if (!IS_ENTITY_ON_SCREEN(iParam0))
									{
										CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (IS_ENTITY_ON_SCREEN(iParam0))
									{
										CLEAR_PED_TASKS(iParam0);
									}
									OPEN_SEQUENCE_TASK(&uLocal_48);
									unk_0xE95B96CFEFE7B61(0, ()(), 0);
									TASK_LOOK_AT_ENTITY(0, ()(), -1, 1072, 3);
									CLOSE_SEQUENCE_TASK(uLocal_48);
									TASK_PERFORM_SEQUENCE(iParam0, uLocal_48);
									CLEAR_SEQUENCE_TASK(&uLocal_48);
									SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
									iLocal_280[iLocal_56] = 0;
									iLocal_281[iLocal_56] = 1;
								}
							}
							if (iLocal_281[iLocal_56] == 1)
							{
								if (!IS_PED_FACING_PED(iParam0, ()(), 45f))
								{
									unk_0xE95B96CFEFE7B61(iParam0, ()(), 0);
									iLocal_281[iLocal_56] = 0;
								}
							}
						}
						else
						{
							if (iLocal_281[iLocal_56] == 1)
							{
								iLocal_281[iLocal_56] = 0;
							}
							if (iParam0 == iLocal_35[0])
							{
								if (DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (GET_SCRIPT_TASK_STATUS(iLocal_35[0], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[0], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[0], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (GET_SCRIPT_TASK_STATUS(iLocal_35[1], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[1], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[1], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (GET_SCRIPT_TASK_STATUS(iLocal_35[2], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[2], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[2], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (GET_SCRIPT_TASK_STATUS(iLocal_35[3], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[3], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[3], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, 0))
								{
									if (GET_SCRIPT_TASK_STATUS(iLocal_35[4], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[4], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[4], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (GET_SCRIPT_TASK_STATUS(iLocal_35[5], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[5], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[5], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (GET_SCRIPT_TASK_STATUS(iLocal_35[6], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[6], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[6], 1);
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		
		case 2:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (iLocal_58 == 0)
			{
				SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_264, joaat("player"));
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iParam0 == iLocal_35[iLocal_56])
					{
						if (func_189(iParam0, ()(), 1) < 15f)
						{
							if (func_189(iParam0, ()(), 1) > 3f)
							{
								if (GET_SCRIPT_TASK_STATUS(iParam0, joaat("script_task_perform_sequence")) != 0 || GET_SCRIPT_TASK_STATUS(iParam0, joaat("script_task_perform_sequence")) != 1)
								{
									if (!IS_ENTITY_ON_SCREEN(iParam0))
									{
										CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (IS_ENTITY_ON_SCREEN(iParam0))
									{
										CLEAR_PED_TASKS(iParam0);
									}
									OPEN_SEQUENCE_TASK(&uLocal_48);
									TASK_GO_TO_ENTITY(0, ()(), -1, 1f, 1f, 1073741824, 0);
									unk_0xE95B96CFEFE7B61(0, ()(), 0);
									CLOSE_SEQUENCE_TASK(uLocal_48);
									TASK_PERFORM_SEQUENCE(iParam0, uLocal_48);
									CLEAR_SEQUENCE_TASK(&uLocal_48);
									iLocal_280[iLocal_56] = 0;
								}
							}
						}
						else
						{
							if (iParam0 == iLocal_35[0])
							{
								if (DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (GET_SCRIPT_TASK_STATUS(iLocal_35[0], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[0], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[0], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (GET_SCRIPT_TASK_STATUS(iLocal_35[1], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[1], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[1], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (GET_SCRIPT_TASK_STATUS(iLocal_35[2], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[2], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[2], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (GET_SCRIPT_TASK_STATUS(iLocal_35[3], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[3], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[3], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, 0))
								{
									if (GET_SCRIPT_TASK_STATUS(iLocal_35[4], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[4], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[4], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (GET_SCRIPT_TASK_STATUS(iLocal_35[5], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[5], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[5], 1);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (GET_SCRIPT_TASK_STATUS(iLocal_35[6], joaat("script_task_use_nearest_scenario_to_pos")) != 1 && GET_SCRIPT_TASK_STATUS(iLocal_35[6], joaat("script_task_use_nearest_scenario_chain_to_pos")) != 1)
									{
										TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[6], 1);
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		
		case 3:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (iLocal_292 == 0)
			{
				if (iLocal_293 == 0)
				{
					iLocal_63 = GET_GAME_TIMER();
					iLocal_293 = 1;
				}
				if (iLocal_293 == 1)
				{
					if (GET_GAME_TIMER() > iLocal_63 + 9000)
					{
						SET_MAX_WANTED_LEVEL(5);
						SET_WANTED_LEVEL_MULTIPLIER(1f);
						SET_PLAYER_WANTED_LEVEL(()(), 2, 0);
						SET_PLAYER_WANTED_LEVEL_NOW(()(), 0);
						iLocal_292 = 1;
					}
				}
			}
			if (iLocal_58 == 0)
			{
				SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_264, joaat("player"));
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				if (iLocal_28 == 3)
				{
					iLocal_56 = 0;
					while (iLocal_56 <= 6)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (func_189(iParam0, ()(), 1) < 100f)
							{
								if (iLocal_282[iLocal_56] == 0)
								{
									SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
									iLocal_282[iLocal_56] = 1;
								}
								if (iLocal_283[iLocal_56] == 0)
								{
									if (!IS_ENTITY_ON_SCREEN(iParam0))
									{
										CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (IS_ENTITY_ON_SCREEN(iParam0))
									{
										CLEAR_PED_TASKS(iParam0);
									}
									TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 100f, 0);
									iLocal_280[iLocal_56] = 0;
									iLocal_283[iLocal_56] = 1;
								}
							}
						}
						iLocal_56++;
					}
					if (iLocal_345 == 0)
					{
						if (DOES_ENTITY_EXIST(iLocal_35[0]))
						{
							if (!IS_PED_INJURED(iLocal_35[0]))
							{
								if (DOES_ENTITY_EXIST(iLocal_33))
								{
									if (IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
									{
										if (IS_PED_IN_VEHICLE(()(), iLocal_33, 1) && IS_ENTITY_AT_COORD(iLocal_33, 919.2f, -1554.4f, 30f, 4f, 4f, 4f, 0, 1, 0))
										{
											if (!IS_ENTITY_ON_SCREEN(iLocal_35[0]))
											{
												CLEAR_PED_TASKS_IMMEDIATELY(iLocal_35[0]);
											}
											if (IS_ENTITY_ON_SCREEN(iLocal_35[0]))
											{
												CLEAR_PED_TASKS(iLocal_35[0]);
											}
											OPEN_SEQUENCE_TASK(&uLocal_48);
											TASK_FOLLOW_NAV_MESH_TO_COORD(0, 917.8f, -1561f, 29f, 3f, -1, 1048576000, 0, 1193033728);
											unk_0xE95B96CFEFE7B61(0, ()(), 0);
											TASK_PLAY_ANIM(0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 8f, -8f, -1, 1, 0, 0, 0, 0);
											CLOSE_SEQUENCE_TASK(uLocal_48);
											TASK_PERFORM_SEQUENCE(iLocal_35[0], uLocal_48);
											CLEAR_SEQUENCE_TASK(&uLocal_48);
											iLocal_345 = 1;
										}
									}
								}
							}
						}
					}
					if (iLocal_345 == 1 && iLocal_362 == 0)
					{
						if (DOES_ENTITY_EXIST(iLocal_35[0]))
						{
							if (!IS_PED_INJURED(iLocal_35[0]))
							{
								if (IS_ENTITY_AT_COORD(iLocal_35[0], 917.8f, -1561f, 29f, 2f, 2f, 2f, 0, 1, 0))
								{
									func_150(&uLocal_99, 3, iLocal_35[0], "FHPrepBWorker", 0, 1);
									func_197(iLocal_35[0], "FHPB_BBAA", "FHPrepBWorker", 4);
									iLocal_362 = 1;
								}
							}
						}
					}
					if (iLocal_344 == 0)
					{
						if (GET_GAME_TIMER() > iLocal_63 + 3000)
						{
							if (DOES_ENTITY_EXIST(iLocal_35[5]))
							{
								if (!IS_PED_INJURED(iLocal_35[5]))
								{
									TASK_PLAY_ANIM(iLocal_35[5], "cellphone@str", "cellphone_call_listen_c", 4f, -8f, -1, 49, 0, 0, 0, 0);
									iLocal_87 = GET_GAME_TIMER();
									iLocal_344 = 1;
								}
							}
						}
					}
					else if (iLocal_343 == 0)
					{
						if (GET_GAME_TIMER() > iLocal_87 + 5000)
						{
							if (DOES_ENTITY_EXIST(iLocal_35[5]))
							{
								if (!IS_PED_INJURED(iLocal_35[5]))
								{
									CLEAR_PED_TASKS(iLocal_35[5]);
									TASK_COMBAT_PED(iLocal_35[5], ()(), 0, 16);
									iLocal_343 = 1;
								}
							}
						}
					}
				}
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iLocal_268[iLocal_56] == 0)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (DOES_ENTITY_EXIST(iParam0))
							{
								if (!IS_PED_INJURED(iParam0))
								{
									SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
									if (IS_PED_IN_ANY_VEHICLE(iParam0, 0))
									{
										if (func_189(iParam0, ()(), 1) > 200f)
										{
											if (!IS_ENTITY_ON_SCREEN(iParam0))
											{
												CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
											}
											if (IS_ENTITY_ON_SCREEN(iParam0))
											{
												CLEAR_PED_TASKS(iParam0);
											}
											TASK_SMART_FLEE_PED(iParam0, ()(), 1000f, -1, 0, 0);
											iLocal_268[iLocal_56] = 1;
										}
									}
									else if (func_189(iParam0, ()(), 1) > 100f)
									{
										if (!IS_ENTITY_ON_SCREEN(iParam0))
										{
											CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
										}
										if (IS_ENTITY_ON_SCREEN(iParam0))
										{
											CLEAR_PED_TASKS(iParam0);
										}
										TASK_SMART_FLEE_PED(iParam0, ()(), 1000f, -1, 0, 0);
										iLocal_268[iLocal_56] = 1;
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			if (iLocal_28 == 4)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iLocal_268[iLocal_56] == 0)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (DOES_ENTITY_EXIST(iParam0))
							{
								if (!IS_PED_INJURED(iParam0))
								{
									if (!IS_ENTITY_ON_SCREEN(iParam0))
									{
										CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									}
									if (IS_ENTITY_ON_SCREEN(iParam0))
									{
										CLEAR_PED_TASKS(iParam0);
									}
									SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
									TASK_SMART_FLEE_PED(iParam0, ()(), 1000f, -1, 0, 0);
									SET_PED_KEEP_TASK(iParam0, 1);
									SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
									iLocal_268[iLocal_56] = 1;
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		
		case 4:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (iLocal_292 == 0)
			{
				if (iLocal_293 == 0)
				{
					iLocal_63 = GET_GAME_TIMER();
					iLocal_293 = 1;
				}
				if (iLocal_293 == 1)
				{
					if (GET_GAME_TIMER() > iLocal_63 + 6000)
					{
						SET_MAX_WANTED_LEVEL(5);
						SET_WANTED_LEVEL_MULTIPLIER(1f);
						SET_PLAYER_WANTED_LEVEL(()(), 2, 0);
						SET_PLAYER_WANTED_LEVEL_NOW(()(), 0);
						iLocal_292 = 1;
					}
				}
			}
			if (iLocal_58 == 0)
			{
				SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_264, joaat("player"));
				SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (DOES_ENTITY_EXIST(iLocal_35[iLocal_56]))
					{
						if (!IS_PED_INJURED(iLocal_35[iLocal_56]))
						{
							if (func_189(()(), iLocal_35[iLocal_56], 1) < 15f)
							{
								if (func_209(iLocal_35[iLocal_56], 6))
								{
									if (CAN_PED_SEE_HATED_PED(iLocal_35[iLocal_56], ()()))
									{
										if (iLocal_285[iLocal_56] == 0)
										{
											if (!IS_ENTITY_ON_SCREEN(iLocal_35[iLocal_56]))
											{
												CLEAR_PED_TASKS_IMMEDIATELY(iLocal_35[iLocal_56]);
											}
											if (IS_ENTITY_ON_SCREEN(iLocal_35[iLocal_56]))
											{
												CLEAR_PED_TASKS(iLocal_35[iLocal_56]);
											}
											unk_0xB1A40D00F279307(iLocal_35[iLocal_56], -1, ()(), -1, 0);
											iLocal_285[iLocal_56] = 1;
											iLocal_284[iLocal_56] = 0;
											iLocal_280[iLocal_56] = 0;
											iLocal_75 = GET_GAME_TIMER();
										}
									}
									else if (GET_GAME_TIMER() > iLocal_75 + 300)
									{
										iLocal_284[iLocal_56] = 0;
									}
								}
								else if (iLocal_284[iLocal_56] == 0)
								{
									if (!IS_ENTITY_ON_SCREEN(iLocal_35[iLocal_56]))
									{
										CLEAR_PED_TASKS_IMMEDIATELY(iLocal_35[iLocal_56]);
									}
									if (IS_ENTITY_ON_SCREEN(iLocal_35[iLocal_56]))
									{
										CLEAR_PED_TASKS(iLocal_35[iLocal_56]);
									}
									TASK_SMART_FLEE_PED(iLocal_35[iLocal_56], ()(), 250f, -1, 0, 0);
									iLocal_284[iLocal_56] = 1;
									iLocal_285[iLocal_56] = 0;
								}
							}
							else if (iLocal_284[iLocal_56] == 0)
							{
								if (!IS_ENTITY_ON_SCREEN(iLocal_35[iLocal_56]))
								{
									CLEAR_PED_TASKS_IMMEDIATELY(iLocal_35[iLocal_56]);
								}
								if (IS_ENTITY_ON_SCREEN(iLocal_35[iLocal_56]))
								{
									CLEAR_PED_TASKS(iLocal_35[iLocal_56]);
								}
								TASK_SMART_FLEE_PED(iLocal_35[iLocal_56], ()(), 250f, -1, 0, 0);
								iLocal_284[iLocal_56] = 1;
								iLocal_285[iLocal_56] = 0;
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
	}
}

int func_209(int iParam0, int iParam1)
{
	if (DOES_ENTITY_EXIST(iParam0) && !IS_PED_INJURED(iParam0))
	{
		if (IS_PED_ARMED(()(), iParam1))
		{
			if (IS_PLAYER_FREE_AIMING_AT_ENTITY(()(), iParam0) || IS_PLAYER_TARGETTING_ENTITY(()(), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_210()
{
	iLocal_37 = func_26(0);
	iLocal_38 = func_26(1);
	iLocal_39 = func_26(2);
	if (func_34(iLocal_37, 0))
	{
		if (!IS_PED_INJURED(iLocal_37))
		{
			if (!func_33(iLocal_37))
			{
				if (!func_212())
				{
					if (func_211(iLocal_37))
					{
						if (func_32(iLocal_37, 0))
						{
							SET_ENTITY_AS_MISSION_ENTITY(iLocal_37, 1, 1);
							SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_37, 1);
							CLEAR_PED_TASKS(iLocal_37);
							iLocal_350 = 0;
							iLocal_353 = 0;
							iLocal_356 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_350 == 0)
				{
					if (!IS_PED_IN_ANY_VEHICLE(()(), 0))
					{
						iLocal_350 = 1;
					}
					else if (IS_PED_IN_ANY_VEHICLE(iLocal_37, 0))
					{
						if (!IS_PED_IN_VEHICLE(iLocal_37, GET_VEHICLE_PED_IS_IN(()(), 0), 0))
						{
							iLocal_350 = 1;
						}
					}
				}
				if (iLocal_350 == 0)
				{
					if (func_212())
					{
						iLocal_350 = 1;
					}
				}
				if (iLocal_347 == 1)
				{
					if ((func_211(iLocal_37) && DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_37, 1)) && iLocal_350 == 0)
					{
						Local_94 = { GET_ENTITY_COORDS(iLocal_37, 1) };
						N_0X07FB139B592FA687(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1);
						if (GET_PLAYER_WANTED_LEVEL(()()) == 0)
						{
							if (iLocal_353 == 0)
							{
								if (N_0XF7B79A50B905A30D(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1))
								{
									TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_37, GET_VEHICLE_PED_IS_IN(iLocal_37, 0), Local_92, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_356 = 0;
									iLocal_353 = 1;
								}
							}
						}
						else if (DOES_ENTITY_EXIST(GET_CLOSEST_VEHICLE(Local_94, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_356 == 0)
							{
								TASK_VEHICLE_MISSION(iLocal_37, GET_VEHICLE_PED_IS_IN(iLocal_37, 0), GET_CLOSEST_VEHICLE(Local_94, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_353 = 0;
								iLocal_356 = 1;
							}
						}
						else if (iLocal_353 == 0)
						{
							if (N_0XF7B79A50B905A30D(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1))
							{
								TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_37, GET_VEHICLE_PED_IS_IN(iLocal_37, 0), Local_92, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_356 = 0;
								iLocal_353 = 1;
							}
						}
					}
					else
					{
						iLocal_350 = 1;
					}
				}
				if (iLocal_350 == 1)
				{
					if (func_25(iLocal_37))
					{
						iLocal_350 = 0;
					}
				}
			}
		}
	}
	if (func_34(iLocal_39, 0))
	{
		if (!IS_PED_INJURED(iLocal_39))
		{
			if (!func_33(iLocal_39))
			{
				if (!func_212())
				{
					if (func_211(iLocal_39))
					{
						if (func_32(iLocal_39, 0))
						{
							SET_ENTITY_AS_MISSION_ENTITY(iLocal_39, 1, 1);
							SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_39, 1);
							CLEAR_PED_TASKS(iLocal_39);
							iLocal_352 = 0;
							iLocal_354 = 0;
							iLocal_357 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_352 == 0)
				{
					if (!IS_PED_IN_ANY_VEHICLE(()(), 0))
					{
						iLocal_352 = 1;
					}
					else if (IS_PED_IN_ANY_VEHICLE(iLocal_39, 0))
					{
						if (!IS_PED_IN_VEHICLE(iLocal_39, GET_VEHICLE_PED_IS_IN(()(), 0), 0))
						{
							iLocal_352 = 1;
						}
					}
				}
				if (iLocal_352 == 0)
				{
					if (func_212())
					{
						iLocal_352 = 1;
					}
				}
				if (iLocal_348 == 1)
				{
					if ((func_211(iLocal_39) && DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_39, 1)) && iLocal_352 == 0)
					{
						Local_94 = { GET_ENTITY_COORDS(iLocal_39, 1) };
						N_0X07FB139B592FA687(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1);
						if (GET_PLAYER_WANTED_LEVEL(()()) == 0)
						{
							if (iLocal_354 == 0)
							{
								if (N_0XF7B79A50B905A30D(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1))
								{
									TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_39, GET_VEHICLE_PED_IS_IN(iLocal_39, 0), Local_92, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_357 = 0;
									iLocal_354 = 1;
								}
							}
						}
						else if (DOES_ENTITY_EXIST(GET_CLOSEST_VEHICLE(Local_94, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_357 == 0)
							{
								TASK_VEHICLE_MISSION(iLocal_39, GET_VEHICLE_PED_IS_IN(iLocal_39, 0), GET_CLOSEST_VEHICLE(Local_94, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_354 = 0;
								iLocal_357 = 1;
							}
						}
						else if (iLocal_354 == 0)
						{
							if (N_0XF7B79A50B905A30D(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1))
							{
								TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_39, GET_VEHICLE_PED_IS_IN(iLocal_39, 0), Local_92, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_357 = 0;
								iLocal_354 = 1;
							}
						}
					}
					else
					{
						iLocal_352 = 1;
					}
				}
				if (iLocal_352 == 1)
				{
					if (func_25(iLocal_39))
					{
						iLocal_352 = 0;
					}
				}
			}
		}
	}
	if (func_34(iLocal_38, 0))
	{
		if (!IS_PED_INJURED(iLocal_38))
		{
			if (!func_33(iLocal_38))
			{
				if (!func_212())
				{
					if (func_211(iLocal_38))
					{
						if (func_32(iLocal_38, 0))
						{
							SET_ENTITY_AS_MISSION_ENTITY(iLocal_38, 1, 1);
							SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_38, 1);
							CLEAR_PED_TASKS(iLocal_38);
							iLocal_351 = 0;
							iLocal_355 = 0;
							iLocal_358 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_351 == 0)
				{
					if (!IS_PED_IN_ANY_VEHICLE(()(), 0))
					{
						iLocal_351 = 1;
					}
					else if (IS_PED_IN_ANY_VEHICLE(iLocal_38, 0))
					{
						if (!IS_PED_IN_VEHICLE(iLocal_38, GET_VEHICLE_PED_IS_IN(()(), 0), 0))
						{
							iLocal_351 = 1;
						}
					}
				}
				if (iLocal_351 == 0)
				{
					if (func_212())
					{
						iLocal_351 = 1;
					}
				}
				if (iLocal_349 == 1)
				{
					if ((func_211(iLocal_38) && DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_38, 1)) && iLocal_351 == 0)
					{
						Local_94 = { GET_ENTITY_COORDS(iLocal_38, 1) };
						N_0X07FB139B592FA687(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1);
						if (GET_PLAYER_WANTED_LEVEL(()()) == 0)
						{
							if (iLocal_355 == 0)
							{
								if (N_0XF7B79A50B905A30D(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1))
								{
									TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_38, GET_VEHICLE_PED_IS_IN(iLocal_38, 0), Local_92, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_358 = 0;
									iLocal_355 = 1;
								}
							}
						}
						else if (DOES_ENTITY_EXIST(GET_CLOSEST_VEHICLE(Local_94, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_358 == 0)
							{
								TASK_VEHICLE_MISSION(iLocal_38, GET_VEHICLE_PED_IS_IN(iLocal_38, 0), GET_CLOSEST_VEHICLE(Local_94, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_355 = 0;
								iLocal_358 = 1;
							}
						}
						else if (iLocal_355 == 0)
						{
							if (N_0XF7B79A50B905A30D(Local_94.f_0, Local_94.f_1, Local_92.f_0, Local_92.f_1))
							{
								TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_38, GET_VEHICLE_PED_IS_IN(iLocal_38, 0), Local_92, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_358 = 0;
								iLocal_355 = 1;
							}
						}
					}
					else
					{
						iLocal_351 = 1;
					}
				}
				if (iLocal_351 == 1)
				{
					if (func_25(iLocal_38))
					{
						iLocal_351 = 0;
					}
				}
			}
		}
	}
}

int func_211(int iParam0)
{
	if (!IS_PED_INJURED(()()) && IS_PED_IN_ANY_VEHICLE(()(), 0))
	{
		if (!IS_PED_INJURED(iParam0))
		{
			if (IS_PED_IN_VEHICLE(iParam0, GET_VEHICLE_PED_IS_IN(()(), 0), 0) && GET_PED_IN_VEHICLE_SEAT(GET_VEHICLE_PED_IS_IN(()(), 0), -1, 0) == iParam0)
			{
				if (DOES_ENTITY_EXIST(iLocal_33))
				{
					if (IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
					{
						if ((IS_PED_IN_VEHICLE(iParam0, iLocal_33, 0) && GET_PED_IN_VEHICLE_SEAT(iLocal_33, -1, 0) == iParam0) && !IS_ENTITY_AT_COORD(iLocal_33, Local_92, 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam0 == iLocal_37)
							{
								iLocal_347 = 1;
							}
							if (iParam0 == iLocal_39)
							{
								iLocal_348 = 1;
							}
							if (iParam0 == iLocal_38)
							{
								iLocal_349 = 1;
							}
							return 1;
						}
					}
				}
			}
		}
	}
	if (iParam0 == iLocal_37)
	{
		iLocal_347 = 0;
	}
	if (iParam0 == iLocal_39)
	{
		iLocal_348 = 0;
	}
	if (iParam0 == iLocal_38)
	{
		iLocal_349 = 0;
	}
	return 0;
}

bool func_212()
{
	return Global_23129;
}

void func_213()
{
	if (DOES_ENTITY_EXIST(iLocal_33))
	{
		if (!IS_VEHICLE_DRIVEABLE(iLocal_33, 0))
		{
			func_216(3);
			return;
		}
		else
		{
			if (func_215(&iLocal_33))
			{
				func_216(2);
				return;
			}
			if (DOES_ENTITY_EXIST(iLocal_32))
			{
				if (!IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
				{
					func_216(1);
					return;
				}
				if (IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
				{
					if (!IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_33))
					{
						if ((IS_VEHICLE_STUCK_ON_ROOF(iLocal_32) || func_214(iLocal_32)) || func_215(&iLocal_32))
						{
							func_216(1);
							return;
						}
					}
				}
			}
		}
	}
	if (iLocal_28 == 3 || iLocal_28 == 4)
	{
		if (DOES_ENTITY_EXIST(iLocal_32))
		{
			if (IS_VEHICLE_DRIVEABLE(iLocal_32, 0))
			{
				if (func_189(iLocal_32, ()(), 1) > 600f)
				{
					func_216(5);
					return;
				}
			}
		}
	}
	if (DOES_ENTITY_EXIST(iLocal_40))
	{
		if (IS_PED_INJURED(iLocal_40))
		{
			func_216(6);
			return;
		}
	}
}

int func_214(int iParam0)
{
	if (DOES_ENTITY_EXIST(uParam0))
	{
		if (IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
		else if (!IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_215(var uParam0)
{
	if (IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		if (((IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 0, 7000) || IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 3, 30000)) || IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 2, 30000)) || IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_216(int iParam0)
{
	iLocal_30 = iParam0;
	if (iLocal_28 != 6)
	{
		iLocal_28 = 6;
		iLocal_53 = 0;
	}
}

void func_217(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_113648.f_9087.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_113648.f_9087.f_99.f_58[iParam0] = iParam1;
}

void func_218()
{
	if (iLocal_28 == 5)
	{
		if (iLocal_360 == 0)
		{
			func_219(657);
		}
	}
}

void func_219(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_63363 = 0;
	if (!Global_63587[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_75457)
	{
		if (Global_75458[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_75458[iVar1 /*9*/].f_1 = 1;
			Global_75458[iVar1 /*9*/].f_2 = 0f;
			if (Global_75458[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_220(bool bParam0)
{
	if (!bParam0 && GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

void func_221()
{
	SET_ALL_RANDOM_PEDS_FLEE(()(), 0);
	SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("packer"), 0);
	SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("phantom"), 0);
	N_0X5B17A90291133DA5("FHPRB_START");
	N_0X5B17A90291133DA5("FHPRB_TRUCK");
	N_0X5B17A90291133DA5("FHPRB_COPS");
	N_0X5B17A90291133DA5("FHPRB_LOST");
	N_0X5B17A90291133DA5("FHPRB_STOP");
	REMOVE_SCENARIO_BLOCKING_AREA(uLocal_42, 0);
	REMOVE_SCENARIO_BLOCKING_AREA(uLocal_43, 0);
	REMOVE_SCENARIO_BLOCKING_AREA(uLocal_44, 0);
	REMOVE_SCENARIO_BLOCKING_AREA(uLocal_45, 0);
	REMOVE_SCENARIO_BLOCKING_AREA(uLocal_46, 0);
	REMOVE_SCENARIO_BLOCKING_AREA(uLocal_47, 0);
	if (DOES_SCENARIO_GROUP_EXIST("SCRAP_SECURITY"))
	{
		if (unk_0x3F4074C23C3682E("SCRAP_SECURITY"))
		{
			SET_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY", 0);
		}
	}
	SET_MAX_WANTED_LEVEL(5);
	if (IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_90))
	{
		REMOVE_DOOR_FROM_SYSTEM(iLocal_90, 0);
	}
	if (IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_91))
	{
		REMOVE_DOOR_FROM_SYSTEM(iLocal_91, 0);
	}
	TERMINATE_THIS_THREAD();
}

void func_222()
{
	int iVar0;
	
	if (HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_113648.f_9087 || func_220(0))
	{
		if (!func_223())
		{
			iVar0 = func_13();
			if (iVar0 != -1)
			{
				if (!func_7(iVar0))
				{
					return;
				}
				SET_BIT(&(Global_91433[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_12();
		}
	}
}

int func_223()
{
	if (((Global_100681 == 13 || Global_100681 == 10) || Global_100681 == 11) || Global_100681 == 12)
	{
		return 0;
	}
	return 1;
}
