// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/ReplicatedVRCameraComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicatedVRCameraComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UReplicatedVRCameraComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UReplicatedVRCameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRComponentPosRep();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBaseCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UReplicatedVRCameraComponent::execServer_SendCameraTransform)
	{
		P_GET_STRUCT(FBPVRComponentPosRep,Z_Param_NewTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SendCameraTransform_Validate(Z_Param_NewTransform))
		{
			RPC_ValidateFailed(TEXT("Server_SendCameraTransform_Validate"));
			return;
		}
		P_THIS->Server_SendCameraTransform_Implementation(Z_Param_NewTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReplicatedVRCameraComponent::execOnRep_ReplicatedCameraTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedCameraTransform();
		P_NATIVE_END;
	}
	static FName NAME_UReplicatedVRCameraComponent_Server_SendCameraTransform = FName(TEXT("Server_SendCameraTransform"));
	void UReplicatedVRCameraComponent::Server_SendCameraTransform(FBPVRComponentPosRep NewTransform)
	{
		ReplicatedVRCameraComponent_eventServer_SendCameraTransform_Parms Parms;
		Parms.NewTransform=NewTransform;
		ProcessEvent(FindFunctionChecked(NAME_UReplicatedVRCameraComponent_Server_SendCameraTransform),&Parms);
	}
	void UReplicatedVRCameraComponent::StaticRegisterNativesUReplicatedVRCameraComponent()
	{
		UClass* Class = UReplicatedVRCameraComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ReplicatedCameraTransform", &UReplicatedVRCameraComponent::execOnRep_ReplicatedCameraTransform },
			{ "Server_SendCameraTransform", &UReplicatedVRCameraComponent::execServer_SendCameraTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplicatedVRCameraComponent, nullptr, "OnRep_ReplicatedCameraTransform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReplicatedVRCameraComponent_eventServer_SendCameraTransform_Parms, NewTransform), Z_Construct_UScriptStruct_FBPVRComponentPosRep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::NewProp_NewTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// I'm sending it unreliable because it is being resent pretty often\n" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
		{ "ToolTip", "I'm sending it unreliable because it is being resent pretty often" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplicatedVRCameraComponent, nullptr, "Server_SendCameraTransform", nullptr, nullptr, sizeof(ReplicatedVRCameraComponent_eventServer_SendCameraTransform_Parms), Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UReplicatedVRCameraComponent_NoRegister()
	{
		return UReplicatedVRCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UReplicatedVRCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetUpdateRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NetUpdateRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSmoothReplicatedMotion_MetaData[];
#endif
		static void NewProp_bSmoothReplicatedMotion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSmoothReplicatedMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedCameraTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedCameraTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSetLockToHmd_MetaData[];
#endif
		static void NewProp_bAutoSetLockToHmd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSetLockToHmd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOffsetByHMD_MetaData[];
#endif
		static void NewProp_bOffsetByHMD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOffsetByHMD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetPositionDuringTick_MetaData[];
#endif
		static void NewProp_bSetPositionDuringTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetPositionDuringTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachChar_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_AttachChar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateInCharacterMovement_MetaData[];
#endif
		static void NewProp_bUpdateInCharacterMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateInCharacterMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform, "OnRep_ReplicatedCameraTransform" }, // 1652609360
		{ &Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform, "Server_SendCameraTransform" }, // 3942892101
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionLibrary" },
		{ "Comment", "/**\n* An overridden camera component that replicates its location in multiplayer\n*/" },
		{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "IncludePath", "ReplicatedVRCameraComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An overridden camera component that replicates its location in multiplayer" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_NetUpdateRate_MetaData[] = {
		{ "Category", "ReplicatedCamera|Networking" },
		{ "Comment", "// Rate to update the position to the server, 100htz is default (same as replication rate, should also hit every tick).\n" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
		{ "ToolTip", "Rate to update the position to the server, 100htz is default (same as replication rate, should also hit every tick)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_NetUpdateRate = { "NetUpdateRate", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReplicatedVRCameraComponent, NetUpdateRate), METADATA_PARAMS(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_NetUpdateRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_NetUpdateRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSmoothReplicatedMotion_MetaData[] = {
		{ "Category", "ReplicatedCamera|Networking" },
		{ "Comment", "// Whether to smooth (lerp) between ticks for the replicated motion, DOES NOTHING if update rate is larger than FPS!\n" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
		{ "ToolTip", "Whether to smooth (lerp) between ticks for the replicated motion, DOES NOTHING if update rate is larger than FPS!" },
	};
#endif
	void Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSmoothReplicatedMotion_SetBit(void* Obj)
	{
		((UReplicatedVRCameraComponent*)Obj)->bSmoothReplicatedMotion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSmoothReplicatedMotion = { "bSmoothReplicatedMotion", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UReplicatedVRCameraComponent), &Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSmoothReplicatedMotion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSmoothReplicatedMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSmoothReplicatedMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_ReplicatedCameraTransform_MetaData[] = {
		{ "Category", "ReplicatedCamera|Networking" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_ReplicatedCameraTransform = { "ReplicatedCameraTransform", "OnRep_ReplicatedCameraTransform", (EPropertyFlags)0x0010000100010021, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReplicatedVRCameraComponent, ReplicatedCameraTransform), Z_Construct_UScriptStruct_FBPVRComponentPosRep, METADATA_PARAMS(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_ReplicatedCameraTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_ReplicatedCameraTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bAutoSetLockToHmd_MetaData[] = {
		{ "Category", "ReplicatedCamera" },
		{ "Comment", "/** Sets lock to hmd automatically based on if the camera is currently locally controlled or not */" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
		{ "ToolTip", "Sets lock to hmd automatically based on if the camera is currently locally controlled or not" },
	};
#endif
	void Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bAutoSetLockToHmd_SetBit(void* Obj)
	{
		((UReplicatedVRCameraComponent*)Obj)->bAutoSetLockToHmd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bAutoSetLockToHmd = { "bAutoSetLockToHmd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UReplicatedVRCameraComponent), &Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bAutoSetLockToHmd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bAutoSetLockToHmd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bAutoSetLockToHmd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bOffsetByHMD_MetaData[] = {
		{ "Category", "ReplicatedCamera" },
		{ "Comment", "// If true will subtract the HMD's location from the position, useful for if the actors base is set to the HMD location always (simple character).\n" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
		{ "ToolTip", "If true will subtract the HMD's location from the position, useful for if the actors base is set to the HMD location always (simple character)." },
	};
#endif
	void Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bOffsetByHMD_SetBit(void* Obj)
	{
		((UReplicatedVRCameraComponent*)Obj)->bOffsetByHMD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bOffsetByHMD = { "bOffsetByHMD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UReplicatedVRCameraComponent), &Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bOffsetByHMD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bOffsetByHMD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bOffsetByHMD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSetPositionDuringTick_MetaData[] = {
		{ "Category", "ReplicatedCamera" },
		{ "Comment", "// For non view target positional updates\n" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
		{ "ToolTip", "For non view target positional updates" },
	};
#endif
	void Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSetPositionDuringTick_SetBit(void* Obj)
	{
		((UReplicatedVRCameraComponent*)Obj)->bSetPositionDuringTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSetPositionDuringTick = { "bSetPositionDuringTick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UReplicatedVRCameraComponent), &Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSetPositionDuringTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSetPositionDuringTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSetPositionDuringTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_AttachChar_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_AttachChar = { "AttachChar", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReplicatedVRCameraComponent, AttachChar), Z_Construct_UClass_AVRBaseCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_AttachChar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_AttachChar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUpdateInCharacterMovement_MetaData[] = {
		{ "Category", "VRExpansionLibrary" },
		{ "Comment", "// If true, this component will not perform logic in its tick, it will instead allow the character movement component to move it (unless the CMC is inactive, then it will go back to self managing)\n" },
		{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
		{ "ToolTip", "If true, this component will not perform logic in its tick, it will instead allow the character movement component to move it (unless the CMC is inactive, then it will go back to self managing)" },
	};
#endif
	void Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUpdateInCharacterMovement_SetBit(void* Obj)
	{
		((UReplicatedVRCameraComponent*)Obj)->bUpdateInCharacterMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUpdateInCharacterMovement = { "bUpdateInCharacterMovement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UReplicatedVRCameraComponent), &Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUpdateInCharacterMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUpdateInCharacterMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUpdateInCharacterMovement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_NetUpdateRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSmoothReplicatedMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_ReplicatedCameraTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bAutoSetLockToHmd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bOffsetByHMD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bSetPositionDuringTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_AttachChar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::NewProp_bUpdateInCharacterMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicatedVRCameraComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::ClassParams = {
		&UReplicatedVRCameraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplicatedVRCameraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReplicatedVRCameraComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReplicatedVRCameraComponent, 413657084);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UReplicatedVRCameraComponent>()
	{
		return UReplicatedVRCameraComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReplicatedVRCameraComponent(Z_Construct_UClass_UReplicatedVRCameraComponent, &UReplicatedVRCameraComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UReplicatedVRCameraComponent"), false, nullptr, nullptr, nullptr);

	void UReplicatedVRCameraComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedCameraTransform(TEXT("ReplicatedCameraTransform"));
		static const FName Name_bSmoothReplicatedMotion(TEXT("bSmoothReplicatedMotion"));
		static const FName Name_NetUpdateRate(TEXT("NetUpdateRate"));

		const bool bIsValid = true
			&& Name_ReplicatedCameraTransform == ClassReps[(int32)ENetFields_Private::ReplicatedCameraTransform].Property->GetFName()
			&& Name_bSmoothReplicatedMotion == ClassReps[(int32)ENetFields_Private::bSmoothReplicatedMotion].Property->GetFName()
			&& Name_NetUpdateRate == ClassReps[(int32)ENetFields_Private::NetUpdateRate].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UReplicatedVRCameraComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicatedVRCameraComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
