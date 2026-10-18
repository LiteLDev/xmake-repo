#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DefinitionInstanceGroup;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class HashedString;
#endif // @header-generator platform
// clang-format on

class ComponentNetRelevancyRegistry {
public:
    // ComponentNetRelevancyRegistry inner types declare
    // clang-format off
    struct NetSerializationCallbacks;
    // clang-format on

    // ComponentNetRelevancyRegistry inner types define
    struct NetSerializationCallbacks {
    public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        // NetSerializationCallbacks inner types declare
        // clang-format off
        struct isClientSideComponentCB;
        struct isServerSideComponentCB;
        // clang-format on

        // NetSerializationCallbacks inner types define
        struct isClientSideComponentCB {};

        struct isServerSideComponentCB {};

    public:
#endif // @header-generator platform
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 48> netSerializeCB;
        ::ll::UntypedStorage<8, 48> isServerSideComponentCB;
        ::ll::UntypedStorage<8, 48> isClientSideComponentCB;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 64> mUnkd3f8f6;
        ::ll::UntypedStorage<8, 64> mUnk155c88;
        ::ll::UntypedStorage<8, 64> mUnk426685;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        NetSerializationCallbacks& operator=(NetSerializationCallbacks const&);
        NetSerializationCallbacks(NetSerializationCallbacks const&);
        NetSerializationCallbacks();
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::ComponentNetRelevancyRegistry::NetSerializationCallbacks& setNeverClientSide();

        MCNAPI ~NetSerializationCallbacks();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform

    using ComponentNetSerializeCallback = std::function<bool(const DefinitionInstanceGroup&, CompoundTag&)>;
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ComponentNetRelevancyRegistry::NetSerializationCallbacks>> mCallbacks;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnkf6cbf4;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ComponentNetRelevancyRegistry& operator=(ComponentNetRelevancyRegistry const&);
    ComponentNetRelevancyRegistry(ComponentNetRelevancyRegistry const&);
    ComponentNetRelevancyRegistry();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ComponentNetRelevancyRegistry::NetSerializationCallbacks&
    registerNetSerialization(::HashedString const&, std::function<bool(const DefinitionInstanceGroup&, CompoundTag&)>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::ComponentNetRelevancyRegistry::NetSerializationCallbacks& registerNetSerialization(
        ::HashedString const&                                                   definitionName,
        ::std::function<bool(::DefinitionInstanceGroup const&, ::CompoundTag&)> serializationCallback
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool serializeComponentDefinitionsForClient(::DefinitionInstanceGroup const&, ::CompoundTag&) const;
#else // @header-generator platform
    MCNAPI bool
    serializeComponentDefinitionsForClient(::DefinitionInstanceGroup const& definitionGroup, ::CompoundTag& tag) const;
#endif // @header-generator platform
    // NOLINTEND
};
