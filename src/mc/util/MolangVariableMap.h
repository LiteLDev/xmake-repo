#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/MolangVariable.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/util/MolangVariableIndex.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class MolangVariable;
struct MolangScriptArg;
#if defined(LL_PLAT_A) // @header-generator platform
struct MolangVariableSettings;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class MolangVariableMap {
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
public:
    LLAPI void setMolangVariable(::MolangVariableIndex molangVariableIndex, ::MolangScriptArg const& value);

#ifdef LL_PLAT_S
    LLAPI void setMolangVariable(uint64 variableNameHash, char const* variableName, ::MolangScriptArg const& value);

    LLAPI void setMolangVariable(HashedString const& variableName, ::MolangScriptArg const& value);
#endif

    LLAPI void setMolangVariable(
        uint64                   variableNameHash,
        char const*              variableName,
        ::MolangScriptArg const& value,
        bool                     allowSpecialCharacters
    );

#endif // @header-generator platform
public:
    // MolangVariableMap inner types define
    enum class MissingVariableHandling : int {
        Error   = 0,
        NoError = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<short>>                           mMapFromVariableIndexToVariableArrayOffset;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<MolangVariable>>> mVariables;
    ::ll::TypedStorage<1, 1, bool>                                          mHasPublicVariables;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<short>> mMapFromVariableIndexToVariableArrayOffset;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::MolangVariable>>> mVariables;
    ::ll::TypedStorage<1, 1, bool>                                                mHasPublicVariables;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    MolangVariableMap(MolangVariableMap const& rhs) {
        mMapFromVariableIndexToVariableArrayOffset = rhs.mMapFromVariableIndexToVariableArrayOffset;
        mVariables                                 = {};
        for (auto& ptr : *rhs.mVariables) {
            mVariables->push_back(std::make_unique<MolangVariable>(*ptr));
        }
        mHasPublicVariables = rhs.mHasPublicVariables;
    }
    MolangVariableMap();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MolangVariableMap(::MolangVariableMap&&);
#else // @header-generator platform
    MCAPI ::MolangVariable* _getMolangVariable(
        ::MolangVariableIndex                        molangVariableIndex,
        ::MolangVariableMap::MissingVariableHandling errorHandling
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MolangVariable* _getOrAddMolangVariable(::MolangVariableIndex);
#else // @header-generator platform
    MCAPI ::MolangVariable* _getOrAddMolangVariable(::MolangVariableIndex molangVariableIndex);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MolangVariableMap& clear();
#else // @header-generator platform
    MCAPI ::MolangVariableMap& clear();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MolangScriptArg const* getConstScriptArgReference(::MolangVariableIndex const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::MolangScriptArg const& getMolangVariable(uint64 variableNameHash, char const*) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MolangScriptArg const& getMolangVariable(ulong, char const*) const;
#else // @header-generator platform
    MCAPI ::MolangVariableMap& operator=(::MolangVariableMap&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MolangScriptArg* getNonConstScriptArgReference(::MolangVariableIndex const&);
#else // @header-generator platform
    MCAPI ::MolangVariableMap& operator=(::MolangVariableMap const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MolangScriptArg const& getOrAddMolangVariable(::HashedString const&, bool);
#else // @header-generator platform
    MCAPI bool operator==(::MolangVariableMap const& rhs) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MolangScriptArg* getOrAddNonConstScriptArgReference(::MolangVariableIndex const&);
#else // @header-generator platform
    MCAPI void setMolangStructMember(
        ::MolangVariableIndex    molangVariableIndex,
        ::HashedString const&    memberNameDepth0,
        ::MolangScriptArg const& value
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MolangVariableMap& operator=(::MolangVariableMap const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void setMolangVariable(::HashedString const& variableName, ::MolangScriptArg const& value);

    MCAPI void setMolangVariable(uint64 variableNameHash, char const* variableName, ::MolangScriptArg const& value);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ~MolangVariableMap();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
