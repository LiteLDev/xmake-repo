#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangVariableIndex.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class MolangVariable;
struct MolangScriptArg;
struct MolangVariableSettings;
// clang-format on

class MolangVariableMap {
public:
    // MolangVariableMap inner types define
    enum class MissingVariableHandling : int {
        Error   = 0,
        NoError = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<short>>                           mMapFromVariableIndexToVariableArrayOffset;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<MolangVariable>>> mVariables;
    ::ll::TypedStorage<1, 1, bool>                                          mHasPublicVariables;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MolangVariableMap(::MolangVariableMap&&);

    MCNAPI ::MolangVariable* _getOrAddMolangVariable(::MolangVariableIndex);

    MCNAPI ::MolangVariableMap& clear();

    MCNAPI ::MolangScriptArg const* getConstScriptArgReference(::MolangVariableIndex const&) const;

    MCNAPI ::MolangScriptArg const& getMolangVariable(ulong, char const*) const;

    MCNAPI ::MolangScriptArg* getNonConstScriptArgReference(::MolangVariableIndex const&);

    MCNAPI ::MolangScriptArg const& getOrAddMolangVariable(::HashedString const&, bool);

    MCNAPI ::MolangScriptArg* getOrAddNonConstScriptArgReference(::MolangVariableIndex const&);

    MCNAPI ::MolangVariableMap& operator=(::MolangVariableMap const&);

    MCNAPI ::MolangVariableMap& operator=(::MolangVariableMap&&);

    MCNAPI bool operator==(::MolangVariableMap const&) const;

    MCNAPI void setMolangStructMember(::MolangVariableIndex, ::HashedString const&, ::MolangScriptArg const&);

    MCNAPI void setMolangVariable(::MolangVariableIndex, ::MolangScriptArg const&);

    MCNAPI void setMolangVariable(::HashedString const&, ::MolangScriptArg const&);

    MCNAPI void setMolangVariable(ulong, char const*, ::MolangScriptArg const&);

    MCNAPI void setMolangVariable(ulong, char const*, ::MolangScriptArg const&, bool);

    MCNAPI void setMolangVariableSettings(::MolangVariableSettings const&);

    MCNAPI ::MolangScriptArg const* tryGetMolangVariable(::MolangVariableIndex) const;

    MCNAPI ::MolangScriptArg const* tryGetMolangVariable(ulong) const;

    MCNAPI ::MolangScriptArg const* tryGetPublicMolangVariable(::MolangVariableIndex) const;

    MCNAPI ~MolangVariableMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MolangVariableMap&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
