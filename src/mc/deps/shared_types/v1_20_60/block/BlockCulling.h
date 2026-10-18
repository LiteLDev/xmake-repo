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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> mIdentifier;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string> mIdentifier;
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        Description();
#else // @header-generator platform
        // member functions
        // NOLINTBEGIN
        MCAPI ~Description();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
            ::ll::TypedStorage<8, 24, std::string>                       mBoneName;
            ::ll::TypedStorage<4, 8, std::optional<int>>                 mCubeIndex;
            ::ll::TypedStorage<2, 4, std::optional<SharedTypes::Facing>> mFace;
#else // @header-generator platform
            ::ll::TypedStorage<8, 32, ::std::string>                         mBoneName;
            ::ll::TypedStorage<4, 8, ::std::optional<int>>                   mCubeIndex;
            ::ll::TypedStorage<2, 4, ::std::optional<::SharedTypes::Facing>> mFace;
#endif // @header-generator platform
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 40, ::SharedTypes::v1_20_60::BlockCulling::Rule::GeometryPart> mGeometryPart;
#else // @header-generator platform
        ::ll::TypedStorage<8, 48, ::SharedTypes::v1_20_60::BlockCulling::Rule::GeometryPart> mGeometryPart;
#endif // @header-generator platform
        ::ll::TypedStorage<2, 2, ::SharedTypes::Facing>                                      mDirectionToCheckAgainst;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_20_60::BlockCulling::Description>     mDescription;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_20_60::BlockCulling::Rule>> mRules;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BlockCulling();
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_20_60::BlockCulling::Description>         mDescription;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_20_60::BlockCulling::Rule>> mRules;
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
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::SemVersionConstant const& VERSION();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
