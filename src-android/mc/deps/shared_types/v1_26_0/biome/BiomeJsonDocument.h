#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_110/biome/BiomeJsonDocument.h"
#include "mc/deps/shared_types/v1_26_0/biome/BiomeComponents.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_0 {

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
        ::ll::UntypedStorage<8, 24>                                        mDescription;
        ::ll::TypedStorage<8, 48, ::SharedTypes::v1_26_0::BiomeComponents> mComponents;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~BiomeJsonObject();
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersionConstant const& VERSION();
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
    ::ll::TypedStorage<8, 72, ::SharedTypes::v1_26_0::BiomeJsonDocument::BiomeJsonObject> mBiomeJsonObject;
    ::ll::TypedStorage<8, 24, std::string>                                                mFormatVersion;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
