#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/util/AssetType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/util/Identifier.h"
#include "mc/deps/shared_types/v1_21_110/biome/BiomeComponents.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110 {

struct BiomeJsonDocument {
public:
    // BiomeJsonDocument inner types declare
    // clang-format off
    struct BiomeJsonObject;
    // clang-format on

    // BiomeJsonDocument inner types define
    struct BiomeJsonObject {
    public:
        // BiomeJsonObject inner types declare
        // clang-format off
        struct BiomeDescription;
        // clang-format on

        // BiomeJsonObject inner types define
        struct BiomeDescription {
        public:
            // member variables
            // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
            ::ll::UntypedStorage<8, 24> mIdentifier;
#else // @header-generator platform
            ::ll::TypedStorage<8, 32, ::SharedTypes::Identifier<3>> mIdentifier;
#endif // @header-generator platform
            // NOLINTEND

        public:
#if defined(LL_PLAT_A) // @header-generator platform
            // prevent constructor by default
            BiomeDescription();
#else // @header-generator platform
            // member functions
            // NOLINTBEGIN
            MCAPI ~BiomeDescription();
            // NOLINTEND
#endif // @header-generator platform

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

    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject::BiomeDescription> mDescription;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject::BiomeDescription>
                                                                             mDescription;
#endif // @header-generator platform
        ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_110::BiomeComponents> mComponents;
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        BiomeJsonObject& operator=(BiomeJsonObject const&);
#endif // @header-generator platform
        BiomeJsonObject();

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~BiomeJsonObject();
#else // @header-generator platform
        MCAPI BiomeJsonObject(::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject const&);

        MCAPI ~BiomeJsonObject();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor(::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject const&);
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
        MCFOLD void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 72, ::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject> mBiomeJsonObject;
    ::ll::TypedStorage<8, 24, std::string>                                                  mFormatVersion;
#else // @header-generator platform
    ::ll::TypedStorage<8, 80, ::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject> mBiomeJsonObject;
    ::ll::TypedStorage<8, 32, ::std::string>                                                mFormatVersion;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BiomeJsonDocument(BiomeJsonDocument const&);
    BiomeJsonDocument();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~BiomeJsonDocument();
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_21_110::BiomeJsonDocument& operator=(::SharedTypes::v1_21_110::BiomeJsonDocument&&);

    MCAPI ::SharedTypes::v1_21_110::BiomeJsonDocument& operator=(::SharedTypes::v1_21_110::BiomeJsonDocument const&);
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
    MCNAPI static std::string const& REGEX_BIOME_IDENTIFIER();
#else // @header-generator platform
    MCAPI static ::std::string const& REGEX_BIOME_IDENTIFIER();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::SemVersionConstant const& VERSION();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
