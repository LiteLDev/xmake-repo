#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangScriptArg.h"
#include "mc/util/MolangVariableIndex.h"
#include "mc/util/MolangVariableSettings.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

class MolangVariable {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::MolangScriptArg>               mValue;
    ::ll::TypedStorage<8, 8, std::unique_ptr<MolangScriptArg>> mPublicValue;
    ::ll::TypedStorage<4, 8, ::MolangVariableSettings>         mSettings;
#else // @header-generator platform
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::TypedStorage<8, 88, ::MolangScriptArg> mValue;
#else // LL_PLAT_C
    ::ll::TypedStorage<8, 96, ::MolangScriptArg> mValue;
#endif
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MolangScriptArg>> mPublicValue;
    ::ll::TypedStorage<4, 8, ::MolangVariableSettings>             mSettings;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    MolangVariable();
#else // @header-generator platform
    MolangVariable(MolangVariable const& rhs) {
        mValue = rhs.mValue;
        if (rhs.mPublicValue) {
            mPublicValue = std::make_unique<MolangScriptArg>(*rhs.mPublicValue);
        }
        mSettings = rhs.mSettings;
    }
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::MolangVariableIndex _findOrAddVariableIndex(ulong, char const*, bool);
#else // @header-generator platform
    MCAPI static ::MolangVariableIndex
    _findOrAddVariableIndex(uint64 nameHash, char const* name, bool allowSpecialCharacters);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _resetToLowWaterMark();
#else // @header-generator platform
    MCAPI static void _resetToLowWaterMark();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _updateLowWaterMark();
#else // @header-generator platform
    MCAPI static void _updateLowWaterMark();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::MolangVariableIndex getVariableIndex(::HashedString const&);
#else // @header-generator platform
    MCAPI static ::MolangVariableIndex getVariableIndex(uint64 nameHash);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::MolangVariableIndex getVariableIndex(ulong);

    MCNAPI static ::MolangVariableIndex getVariableIndex(::HashedString const&, bool);

    MCNAPI static ::MolangVariableIndex getVariableIndex(ulong, char const*, bool);

    MCNAPI static ::HashedString const& getVariableName(::MolangVariableIndex);

    MCNAPI static void initVariableMaps();

    MCNAPI static void processWaterMark();
#else // @header-generator platform
    MCAPI static void initVariableMaps();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool& mHasSetWatermark();
#else // @header-generator platform
    MCAPI static bool& mHasSetWatermark();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<MolangVariableIndex, HashedString>& mIndexToVariableNameMap();
#else // @header-generator platform
    MCAPI static ::std::unordered_map<::MolangVariableIndex, ::HashedString>& mIndexToVariableNameMap();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<MolangVariableIndex, HashedString>& mIndexToVariableNameMap_LowWaterMark();
#else // @header-generator platform
    MCAPI static ::std::unordered_map<::MolangVariableIndex, ::HashedString>& mIndexToVariableNameMap_LowWaterMark();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<ulong, MolangVariableIndex>& mVariableNameToIndexMap();
#else // @header-generator platform
    MCAPI static ::std::unordered_map<uint64, ::MolangVariableIndex>& mVariableNameToIndexMap();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<ulong, MolangVariableIndex>& mVariableNameToIndexMap_LowWaterMark();
#else // @header-generator platform
    MCAPI static ::std::unordered_map<uint64, ::MolangVariableIndex>& mVariableNameToIndexMap_LowWaterMark();
#endif // @header-generator platform
    // NOLINTEND
};
