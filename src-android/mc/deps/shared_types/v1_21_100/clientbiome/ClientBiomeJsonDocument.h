#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/clientbiome/client_biome_json_document_helper/ComponentMap.h"
#include "mc/deps/shared_types/v1_21_90/clientbiome/ClientBiomeJsonDocument.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

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
        struct ComponentMap;
        // clang-format on

        // ClientBiomeJsonObject inner types define
        struct ComponentMap : public ::ClientBiomeJsonDocumentHelper::ComponentMap {
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
        ::ll::UntypedStorage<8, 24> mDescription;
        ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_100::ClientBiomeJsonDocument::ClientBiomeJsonObject::ComponentMap> mComponents;
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
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_100::ClientBiomeJsonDocument::ClientBiomeJsonObject> mClientBiomeJsonObject;
    ::ll::TypedStorage<8, 24, std::string> mFormatVersion;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientBiomeJsonDocument(::SharedTypes::v1_21_100::ClientBiomeJsonDocument const&);

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
    MCNAPI void* $ctor(::SharedTypes::v1_21_100::ClientBiomeJsonDocument const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
