#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/clientbiome/client_biome_json_document_helper/ComponentMap.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_40 {

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
        struct ComponentMap;
        // clang-format on

        // ClientBiomeJsonObject inner types define
        struct ClientBiomeDescription {
        public:
            // member variables
            // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
            ::ll::TypedStorage<8, 24, std::string> mIdentifier;
#else // @header-generator platform
            ::ll::TypedStorage<8, 32, ::std::string> mIdentifier;
            // NOLINTEND

        public:
            // member functions
            // NOLINTBEGIN
            MCAPI ~ClientBiomeDescription();
#endif // @header-generator platform
            // NOLINTEND

        public:
            // static functions
            // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
            MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
            MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCFOLD void $dtor();
#endif // @header-generator platform
            // NOLINTEND
        };

#if defined(LL_PLAT_A) // @header-generator platform
        struct ComponentMap : public ::ClientBiomeJsonDocumentHelper::ComponentMap {
        public:
            // static functions
            // NOLINTBEGIN
            MCNAPI static void bindType(::cereal::ReflectionCtx&);
            // NOLINTEND
        };
#else // @header-generator platform
        struct ComponentMap : public ::ClientBiomeJsonDocumentHelper::ComponentMap {};
#endif // @header-generator platform

    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject::ClientBiomeDescription> mDescription;
        ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject::ComponentMap> mComponents;
        // clang-format on
#else // @header-generator platform
        ::ll::TypedStorage<
            8,
            32,
            ::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject::ClientBiomeDescription>
            mDescription;
        ::ll::TypedStorage<8, 16, ::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject::ComponentMap>
            mComponents;
#endif // @header-generator platform
        // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
    public:
        // prevent constructor by default
        ClientBiomeJsonObject(ClientBiomeJsonObject const&);
        ClientBiomeJsonObject();

#endif
#endif // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~ClientBiomeJsonObject();
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCFOLD ::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject&
        operator=(::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject const&);

        MCAPI ~ClientBiomeJsonObject();
#endif
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCFOLD void $dtor();
#endif
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject> mClientBiomeJsonObject;
    ::ll::TypedStorage<8, 24, std::string> mFormatVersion;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_40::ClientBiomeJsonDocument::ClientBiomeJsonObject>
                                             mClientBiomeJsonObject;
    ::ll::TypedStorage<8, 32, ::std::string> mFormatVersion;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ClientBiomeJsonDocument& operator=(ClientBiomeJsonDocument const&);
    ClientBiomeJsonDocument();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ClientBiomeJsonDocument(::SharedTypes::v1_21_40::ClientBiomeJsonDocument const&);

    MCNAPI ~ClientBiomeJsonDocument();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ClientBiomeJsonDocument(::SharedTypes::v1_21_40::ClientBiomeJsonDocument const&);

    MCFOLD ::SharedTypes::v1_21_40::ClientBiomeJsonDocument&
    operator=(::SharedTypes::v1_21_40::ClientBiomeJsonDocument&&);

    MCAPI ~ClientBiomeJsonDocument();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SemVersionConstant const& VERSION();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::SemVersionConstant const& VERSION();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_21_40::ClientBiomeJsonDocument const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCFOLD void* $ctor(::SharedTypes::v1_21_40::ClientBiomeJsonDocument const&);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_40
