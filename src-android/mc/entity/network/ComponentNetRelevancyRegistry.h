#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DefinitionInstanceGroup;
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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> netSerializeCB;
        ::ll::UntypedStorage<8, 48> isServerSideComponentCB;
        ::ll::UntypedStorage<8, 48> isClientSideComponentCB;
        // NOLINTEND

    public:
        // prevent constructor by default
        NetSerializationCallbacks& operator=(NetSerializationCallbacks const&);
        NetSerializationCallbacks(NetSerializationCallbacks const&);
        NetSerializationCallbacks();

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
    };

    using ComponentNetSerializeCallback = std::function<bool(const DefinitionInstanceGroup&, CompoundTag&)>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ComponentNetRelevancyRegistry::NetSerializationCallbacks>> mCallbacks;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ComponentNetRelevancyRegistry::NetSerializationCallbacks&
    registerNetSerialization(::HashedString const&, std::function<bool(const DefinitionInstanceGroup&, CompoundTag&)>);

    MCNAPI bool serializeComponentDefinitionsForClient(::DefinitionInstanceGroup const&, ::CompoundTag&) const;
    // NOLINTEND
};
