#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/Facing.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_60 {

struct BlockCulling {
public:
    // BlockCulling inner types declare
    // clang-format off
    struct Description;
    struct Rule;
    // clang-format on

    // BlockCulling inner types define
    struct Description {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mIdentifier;
        // NOLINTEND

    public:
        // prevent constructor by default
        Description();
    };

    struct Rule {
    public:
        // Rule inner types declare
        // clang-format off
        struct GeometryPart;
        // clang-format on

        // Rule inner types define
        struct GeometryPart {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 24, std::string>                       mBoneName;
            ::ll::TypedStorage<4, 8, std::optional<int>>                 mCubeIndex;
            ::ll::TypedStorage<2, 4, std::optional<SharedTypes::Facing>> mFace;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::SharedTypes::v1_20_60::BlockCulling::Rule::GeometryPart> mGeometryPart;
        ::ll::TypedStorage<2, 2, ::SharedTypes::Facing>                                      mDirectionToCheckAgainst;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_20_60::BlockCulling::Description>     mDescription;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_20_60::BlockCulling::Rule>> mRules;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BlockCulling();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
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

} // namespace SharedTypes::v1_20_60
