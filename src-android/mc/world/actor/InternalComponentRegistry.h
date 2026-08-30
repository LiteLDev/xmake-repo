#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
// clang-format on

class InternalComponentRegistry {
public:
    // InternalComponentRegistry inner types declare
    // clang-format off
    struct ComponentInfo;
    // clang-format on

    // InternalComponentRegistry inner types define
    struct ComponentInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> mLegacyDataConversionFunc;
        ::ll::UntypedStorage<8, 48> mCreateAndLoadComponentFunc;
        ::ll::UntypedStorage<8, 48> mSaveComponentFunc;
        // NOLINTEND

    public:
        // prevent constructor by default
        ComponentInfo& operator=(ComponentInfo const&);
        ComponentInfo(ComponentInfo const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::InternalComponentRegistry::ComponentInfo& operator=(::InternalComponentRegistry::ComponentInfo&&);

        MCNAPI ~ComponentInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, InternalComponentRegistry::ComponentInfo>> mRegistry;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InternalComponentRegistry();

    virtual void registerComponents();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addComponentSaveData(::Actor const&, ::CompoundTag&);

    MCNAPI void initializeComponents(::Actor&, ::CompoundTag const&, ::DataLoadHelper&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::CompoundTag& _getOrCreateComponentScope(::CompoundTag&, std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& INTERNAL_COMPONENTS();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $registerComponents();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
