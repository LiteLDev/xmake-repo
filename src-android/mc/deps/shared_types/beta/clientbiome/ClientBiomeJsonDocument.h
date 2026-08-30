#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/beta/eas/EnvironmentAttributesStorage.h"
#include "mc/deps/shared_types/v1_21_130/clientbiome/ClientBiomeJsonDocument.h"
#include "mc/deps/shared_types/v1_21_90/clientbiome/ClientBiomeJsonDocument.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Beta {

struct ClientBiomeJsonDocument {
public:
    // ClientBiomeJsonDocument inner types declare
    // clang-format off
    struct ClientBiomeJsonObject;
    // clang-format on

    // ClientBiomeJsonDocument inner types define
    struct ClientBiomeJsonObject {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mDescription;
        ::ll::UntypedStorage<8, 24> mComponents;
        ::ll::TypedStorage<8, 56, std::optional<SharedTypes::Beta::EnvironmentAttributesStorage>>
            mEnvironmentAttributes;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ClientBiomeJsonObject(::SharedTypes::Beta::ClientBiomeJsonDocument::ClientBiomeJsonObject const&);

        MCNAPI bool operator==(::SharedTypes::Beta::ClientBiomeJsonDocument::ClientBiomeJsonObject const&) const;

        MCNAPI ~ClientBiomeJsonObject();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::SharedTypes::Beta::ClientBiomeJsonDocument::ClientBiomeJsonObject const&);
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
    // clang-format off
    ::ll::TypedStorage<8, 104, ::SharedTypes::Beta::ClientBiomeJsonDocument::ClientBiomeJsonObject> mClientBiomeJsonObject;
    ::ll::TypedStorage<8, 24, std::string> mFormatVersion;
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND
};

} // namespace SharedTypes::Beta
