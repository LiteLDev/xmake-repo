#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/deps/shared_types/AnimationSource.h"
#include "mc/deps/shared_types/GeometrySource.h"
#include "mc/deps/shared_types/PieceType.h"
#include "mc/deps/shared_types/TextureSource.h"
#include "mc/deps/shared_types/TintColor.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_40::PersonaPieceMetaDef {

struct PersonaPieceMeta {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> mPieceId;
    ::ll::TypedStorage<8, 24, std::string> mPieceName;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::PieceType> mPieceType;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mPieceSubType;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mBodyVariant;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mClothingMap;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mFaceClothingMap;
    ::ll::TypedStorage<8, 40, std::optional<std::variant<std::vector<std::string>, std::string>>> mZone;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<SharedTypes::v1_26_40::PersonaPieceMetaDef::TextureSource>>> mTextureSources;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<SharedTypes::v1_26_40::PersonaPieceMetaDef::GeometrySource>>> mGeometrySources;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<SharedTypes::v1_26_40::PersonaPieceMetaDef::AnimationSource>>> mAnimationSources;
    ::ll::TypedStorage<8, 112, std::optional<std::variant<SharedTypes::v1_26_40::PersonaPieceMetaDef::TintColor, std::string>>> mTintColor;
    ::ll::TypedStorage<8, 112, std::optional<std::variant<SharedTypes::v1_26_40::PersonaPieceMetaDef::TintColor, std::string>>> mTintBaseColor;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mAllowTintOverride;
    ::ll::TypedStorage<8, 56, std::optional<cereal::DynamicValue>> mColorSwatches;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersonaPieceMeta(::SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta const&);

    MCNAPI PersonaPieceMeta(::SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta&&);

    MCNAPI ::SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta&
    operator=(::SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta&&);

    MCNAPI ::SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta&
    operator=(::SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta const&);

    MCNAPI bool operator==(::SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta const&) const;

    MCNAPI ~PersonaPieceMeta();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& NAME();

    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta const&);

    MCNAPI void* $ctor(::SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40::PersonaPieceMetaDef
