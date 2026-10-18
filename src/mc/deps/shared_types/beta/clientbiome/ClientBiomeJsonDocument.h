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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 24> mDescription;
        ::ll::UntypedStorage<8, 24> mComponents;
        ::ll::TypedStorage<8, 56, std::optional<SharedTypes::Beta::EnvironmentAttributesStorage>>
#else // @header-generator platform
        ::ll::TypedStorage<
            8,
            32,
            ::SharedTypes::v1_21_90::ClientBiomeJsonDocument::ClientBiomeJsonObject::ClientBiomeDescription>
            mDescription;
        ::ll::
            TypedStorage<8, 16, ::SharedTypes::v1_21_130::ClientBiomeJsonDocument::ClientBiomeJsonObject::ComponentMap>
                mComponents;
        ::ll::TypedStorage<8, 56, ::std::optional<::SharedTypes::Beta::EnvironmentAttributesStorage>>
#endif // @header-generator platform
            mEnvironmentAttributes;
        // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
    public:
        // prevent constructor by default
        ClientBiomeJsonObject();

#endif
#endif // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ClientBiomeJsonObject(::SharedTypes::Beta::ClientBiomeJsonDocument::ClientBiomeJsonObject const&);

        MCNAPI bool operator==(::SharedTypes::Beta::ClientBiomeJsonDocument::ClientBiomeJsonObject const&) const;

        MCNAPI ~ClientBiomeJsonObject();
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCAPI ClientBiomeJsonObject(::SharedTypes::Beta::ClientBiomeJsonDocument::ClientBiomeJsonObject const&);

        MCAPI ::SharedTypes::Beta::ClientBiomeJsonDocument::ClientBiomeJsonObject&
        operator=(::SharedTypes::Beta::ClientBiomeJsonDocument::ClientBiomeJsonObject&&);

        MCAPI ::SharedTypes::Beta::ClientBiomeJsonDocument::ClientBiomeJsonObject&
        operator=(::SharedTypes::Beta::ClientBiomeJsonDocument::ClientBiomeJsonObject const&);

        MCAPI bool operator==(::SharedTypes::Beta::ClientBiomeJsonDocument::ClientBiomeJsonObject const& other) const;

        MCAPI ~ClientBiomeJsonObject();
#endif
#endif // @header-generator platform
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif
#endif // @header-generator platform
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(::SharedTypes::Beta::ClientBiomeJsonDocument::ClientBiomeJsonObject const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCAPI void* $ctor(::SharedTypes::Beta::ClientBiomeJsonDocument::ClientBiomeJsonObject const&);
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
        MCAPI void $dtor();
#endif
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 104, ::SharedTypes::Beta::ClientBiomeJsonDocument::ClientBiomeJsonObject> mClientBiomeJsonObject;
    ::ll::TypedStorage<8, 24, std::string> mFormatVersion;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 104, ::SharedTypes::Beta::ClientBiomeJsonDocument::ClientBiomeJsonObject>
                                             mClientBiomeJsonObject;
    ::ll::TypedStorage<8, 32, ::std::string> mFormatVersion;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::Beta
