#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::TypedStorage<8, 64, ::std::function<void(::CompoundTag const&, ::CompoundTag&)>>
                                                                                         mLegacyDataConversionFunc;
        ::ll::TypedStorage<8, 64, ::std::function<void(::Actor&, ::CompoundTag const&)>> mCreateAndLoadComponentFunc;
        ::ll::TypedStorage<8, 64, ::std::function<void(::Actor const&, ::CompoundTag&)>> mSaveComponentFunc;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, InternalComponentRegistry::ComponentInfo>> mRegistry;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::InternalComponentRegistry::ComponentInfo>>
        mRegistry;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~InternalComponentRegistry();
#else // @header-generator platform
    virtual ~InternalComponentRegistry() = default;
#endif // @header-generator platform

    virtual void registerComponents();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addComponentSaveData(::Actor const&, ::CompoundTag&);
#else // @header-generator platform
    MCAPI void _initializeComponents(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initializeComponents(::Actor&, ::CompoundTag const&, ::DataLoadHelper&) const;
#else // @header-generator platform
    MCAPI void initializeComponents(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::CompoundTag& _getOrCreateComponentScope(::CompoundTag&, std::string const&);
#else // @header-generator platform
    MCAPI static ::CompoundTag& _getOrCreateComponentScope(::CompoundTag& tag, ::std::string const& componentName);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& INTERNAL_COMPONENTS();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::string const& INTERNAL_COMPONENTS();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $registerComponents();
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $registerComponents();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
