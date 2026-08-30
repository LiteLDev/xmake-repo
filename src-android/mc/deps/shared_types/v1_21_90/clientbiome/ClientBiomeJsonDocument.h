#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_70/clientbiome/ClientBiomeJsonDocument.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_90 {

struct ClientBiomeJsonDocument {
public:
    // ClientBiomeJsonDocument inner types declare
    // clang-format off
    struct ClientBiomeJsonObject;
    // clang-format on

    // ClientBiomeJsonDocument inner types define
    struct ClientBiomeJsonObject {
    public:
        // ClientBiomeJsonObject inner types declare
        // clang-format off
        struct ClientBiomeDescription;
        // clang-format on

        // ClientBiomeJsonObject inner types define
        struct ClientBiomeDescription {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 24, std::string> mIdentifier;
            // NOLINTEND

        public:
            // static functions
            // NOLINTBEGIN
            MCNAPI static void bindType(::cereal::ReflectionCtx&);
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_90::ClientBiomeJsonDocument::ClientBiomeJsonObject::ClientBiomeDescription> mDescription;
        ::ll::UntypedStorage<8, 24> mComponents;
        // clang-format on
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ClientBiomeJsonObject();
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
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_90::ClientBiomeJsonDocument::ClientBiomeJsonObject> mClientBiomeJsonObject;
    ::ll::TypedStorage<8, 24, std::string> mFormatVersion;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientBiomeJsonDocument(::SharedTypes::v1_21_90::ClientBiomeJsonDocument const&);

    MCNAPI ~ClientBiomeJsonDocument();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_90::ClientBiomeJsonDocument const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_90
