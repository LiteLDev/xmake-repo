#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/AssetType.h"
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
            ::ll::UntypedStorage<8, 24> mIdentifier;
            // NOLINTEND

        public:
            // prevent constructor by default
            BiomeDescription();

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
        ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject::BiomeDescription> mDescription;
        ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_110::BiomeComponents> mComponents;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        BiomeJsonObject();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~BiomeJsonObject();
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
    ::ll::TypedStorage<8, 72, ::SharedTypes::v1_21_110::BiomeJsonDocument::BiomeJsonObject> mBiomeJsonObject;
    ::ll::TypedStorage<8, 24, std::string>                                                  mFormatVersion;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BiomeJsonDocument();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& REGEX_BIOME_IDENTIFIER();

    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
