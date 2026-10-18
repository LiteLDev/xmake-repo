#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/beta/biome/BiomeComponents.h"
#include "mc/deps/shared_types/beta/eas/EnvironmentAttributesStorage.h"
#include "mc/deps/shared_types/v1_21_110/biome/BiomeJsonDocument.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Beta {

struct BiomeJsonDocument {
public:
    // BiomeJsonDocument inner types declare
    // clang-format off
    struct BiomeJsonObject;
    // clang-format on

    // BiomeJsonDocument inner types define
    struct BiomeJsonObject {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 24>                                     mDescription;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject::BiomeDescription>
                                                                        mDescription;
#endif // @header-generator platform
        ::ll::TypedStorage<8, 48, ::SharedTypes::Beta::BiomeComponents> mComponents;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 56, std::optional<SharedTypes::Beta::EnvironmentAttributesStorage>>
#else // @header-generator platform
        ::ll::TypedStorage<8, 56, ::std::optional<::SharedTypes::Beta::EnvironmentAttributesStorage>>
#endif // @header-generator platform
            mEnvironmentAttributes;
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        // prevent constructor by default
        BiomeJsonObject& operator=(BiomeJsonObject const&);
        BiomeJsonObject();

    public:
#endif // @header-generator platform
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::SharedTypes::Beta::BiomeJsonDocument::BiomeJsonObject&
        operator=(::SharedTypes::Beta::BiomeJsonDocument::BiomeJsonObject const&);
#else // @header-generator platform
        MCAPI BiomeJsonObject(::SharedTypes::Beta::BiomeJsonDocument::BiomeJsonObject const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool operator==(::SharedTypes::Beta::BiomeJsonDocument::BiomeJsonObject const&) const;
#else // @header-generator platform
        MCAPI ::SharedTypes::Beta::BiomeJsonDocument::BiomeJsonObject&
        operator=(::SharedTypes::Beta::BiomeJsonDocument::BiomeJsonObject&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~BiomeJsonObject();
#else // @header-generator platform
        MCAPI ~BiomeJsonObject();
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // static functions
#else // @header-generator platform
        // constructor thunks
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
        MCAPI void* $ctor(::SharedTypes::Beta::BiomeJsonDocument::BiomeJsonObject const&);
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

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 128, ::SharedTypes::Beta::BiomeJsonDocument::BiomeJsonObject> mBiomeJsonObject;
    ::ll::TypedStorage<8, 24, std::string>                                              mFormatVersion;
#else // @header-generator platform
    ::ll::TypedStorage<8, 136, ::SharedTypes::Beta::BiomeJsonDocument::BiomeJsonObject> mBiomeJsonObject;
    ::ll::TypedStorage<8, 32, ::std::string>                                            mFormatVersion;
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
    MCAPI static ::SemVersionConstant const& VERSION();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::Beta
