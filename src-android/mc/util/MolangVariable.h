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
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::MolangScriptArg>               mValue;
    ::ll::TypedStorage<8, 8, std::unique_ptr<MolangScriptArg>> mPublicValue;
    ::ll::TypedStorage<4, 8, ::MolangVariableSettings>         mSettings;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangVariable();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::MolangVariableIndex _findOrAddVariableIndex(ulong, char const*, bool);

    MCNAPI static void _resetToLowWaterMark();

    MCNAPI static void _updateLowWaterMark();

    MCNAPI static ::MolangVariableIndex getVariableIndex(::HashedString const&);

    MCNAPI static ::MolangVariableIndex getVariableIndex(ulong);

    MCNAPI static ::MolangVariableIndex getVariableIndex(::HashedString const&, bool);

    MCNAPI static ::MolangVariableIndex getVariableIndex(ulong, char const*, bool);

    MCNAPI static ::HashedString const& getVariableName(::MolangVariableIndex);

    MCNAPI static void initVariableMaps();

    MCNAPI static void processWaterMark();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool& mHasSetWatermark();

    MCNAPI static std::unordered_map<MolangVariableIndex, HashedString>& mIndexToVariableNameMap();

    MCNAPI static std::unordered_map<MolangVariableIndex, HashedString>& mIndexToVariableNameMap_LowWaterMark();

    MCNAPI static std::unordered_map<ulong, MolangVariableIndex>& mVariableNameToIndexMap();

    MCNAPI static std::unordered_map<ulong, MolangVariableIndex>& mVariableNameToIndexMap_LowWaterMark();
    // NOLINTEND
};
