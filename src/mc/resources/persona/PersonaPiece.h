#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/shared_types/BodySizeType.h"
#include "mc/deps/shared_types/PersonaPieceMeta.h"
#include "mc/deps/shared_types/PieceType.h"
#include "mc/platform/UUID.h"
#include "mc/resources/persona/PersonaAnimationDefinition.h"
#else // @header-generator platform
#include "mc/deps/shared_types/persona/PieceType.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ILocalizationDictionary;
#else // @header-generator platform
#endif // @header-generator platform
class Pack;
class TintMapColor;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { template<typename T0, int T1> class BasicStackString; }
#else // @header-generator platform
struct PackIdVersion;
#endif // @header-generator platform
namespace Json { class Value; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Puv { template<typename T0, typename T1, typename T2, typename T3> class SlicedLoader; }
#else // @header-generator platform
namespace SharedTypes::v1_26_40::PersonaPieceMetaDef { struct PersonaPieceMeta; }
namespace mce { class UUID; }
#endif // @header-generator platform
// clang-format on

class PersonaPiece {
public:
    // PersonaPiece inner types declare
    // clang-format off
    struct FilePaths;
    // clang-format on

    // PersonaPiece inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct FilePaths {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 1032> metaFilePath;
        ::ll::UntypedStorage<8, 1032> geoFilePath;
        ::ll::UntypedStorage<8, 1032> storeInfoFilePath;
        ::ll::UntypedStorage<8, 1032> locFilePath;
        // NOLINTEND
    };

    using Meta = ::SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta;

    using MetaLoader = ::Puv::SlicedLoader<
        SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta,
        std::nullptr_t,
        std::nullptr_t,
        SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta>;
#else // @header-generator platform
    struct FilePaths {};
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                                     mPieceId;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                                                     mPieceIdUUID;
    ::ll::UntypedStorage<8, 48>                                                                mPackIdVersion;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::PieceType>                                mPieceType;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::PieceType>                                mPieceSubType;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ILocalizationDictionary>>                        mlocDict;
    ::ll::TypedStorage<8, 24, std::string>                                                     mRelativeLocation;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                                      mPieceNameLocKeyOverride;
    ::ll::TypedStorage<8, 24, std::string>                                                     mMetaFileName;
    ::ll::TypedStorage<8, 24, std::string>                                                     mThumbnailPath;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::BodySizeType>                             mBodyVariant;
    ::ll::TypedStorage<8, 608, ::SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta> mMeta;
    ::ll::UntypedStorage<1, 24>                                                                mLocFilePath;
    ::ll::TypedStorage<8, 24, std::string>                                                     mGeometryFileName;
    ::ll::TypedStorage<8, 24, std::vector<PersonaAnimationDefinition>>                         mAnimations;
    ::ll::TypedStorage<8, 16, std::weak_ptr<const Pack>>                                       mSourcePack;
    ::ll::TypedStorage<1, 1, bool>                                                             mAllowsTintOverride;
    ::ll::TypedStorage<1, 1, bool>                                                             mCanBeSidePiece;
    ::ll::TypedStorage<1, 1, bool>                                                             mPlatformLocked;
    ::ll::TypedStorage<1, 1, bool>                                                             mTitleLocked;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32>  mUnkc2f7b9;
    ::ll::UntypedStorage<8, 16>  mUnka7a426;
    ::ll::UntypedStorage<8, 48>  mUnk78487f;
    ::ll::UntypedStorage<4, 4>   mUnka7d56c;
    ::ll::UntypedStorage<4, 4>   mUnk648c25;
    ::ll::UntypedStorage<8, 16>  mUnkc81d51;
    ::ll::UntypedStorage<8, 32>  mUnk4b87e2;
    ::ll::UntypedStorage<8, 40>  mUnk11134a;
    ::ll::UntypedStorage<8, 32>  mUnkd82499;
    ::ll::UntypedStorage<8, 32>  mUnkca0cec;
    ::ll::UntypedStorage<4, 4>   mUnke8d659;
    ::ll::UntypedStorage<8, 752> mUnka92f93;
    ::ll::UntypedStorage<8, 32>  mUnk523c0d;
    ::ll::UntypedStorage<8, 32>  mUnk34f751;
    ::ll::UntypedStorage<8, 24>  mUnk676bf8;
    ::ll::UntypedStorage<8, 16>  mUnkb05ae8;
    ::ll::UntypedStorage<1, 1>   mUnk79e0aa;
    ::ll::UntypedStorage<1, 1>   mUnk50d18c;
    ::ll::UntypedStorage<1, 1>   mUnk8e2a79;
    ::ll::UntypedStorage<1, 1>   mUnkf5bc1d;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    PersonaPiece& operator=(PersonaPiece const&);

#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    PersonaPiece& operator=(PersonaPiece const&);
    PersonaPiece(PersonaPiece const&);
    PersonaPiece();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    PersonaPiece& operator=(PersonaPiece const&);
    PersonaPiece(PersonaPiece const&);

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PersonaPiece();

    MCNAPI PersonaPiece(::PersonaPiece const&);

    MCNAPI PersonaPiece(::PersonaPiece&&);

    MCNAPI PersonaPiece(
        std::string const&,
        ::PackIdVersion const&,
        ::SharedTypes::persona::PieceType,
        std::weak_ptr<const Pack>,
        bool,
        bool,
        bool
    );

    MCNAPI void _initSideInfo();

    MCNAPI bool allowsTintOverride() const;

    MCNAPI bool canBeSidePiece() const;

    MCNAPI ::PersonaAnimationDefinition const& getAnimation(int) const;

    MCNAPI ::SharedTypes::persona::BodySizeType const& getBodyVariant() const;

    MCNAPI std::string const& getGeometryFileName() const;

    MCNAPI std::string getLocString(std::string const&) const;

    MCNAPI ::SharedTypes::v1_26_40::PersonaPieceMetaDef::PersonaPieceMeta const& getMeta() const;

    MCNAPI ::mce::UUID const& getPackId() const;

    MCNAPI ::PackIdVersion const& getPackIdVersion() const;

    MCNAPI ::mce::UUID const& getPieceIdAsUUID() const;

    MCNAPI std::string getPieceName() const;

    MCNAPI ::SharedTypes::persona::PieceType const& getPieceSubType() const;

    MCNAPI ::SharedTypes::persona::PieceType const& getPieceType() const;

    MCNAPI std::string getPieceTypeAsString() const;

    MCNAPI std::string const& getRelativeLocation() const;

    MCNAPI std::shared_ptr<const Pack> getSourcePack() const;

    MCNAPI std::string const& getThumbnailPath() const;

    MCNAPI ::TintMapColor getTintBaseColor() const;

    MCNAPI bool getTintMapColor(::TintMapColor&) const;

    MCNAPI bool hasLocStringData() const;

    MCNAPI bool hasPersonaTextureData() const;

    MCNAPI void initLocalizationDictionary();

    MCNAPI bool isColorChangeAllowed() const;

    MCNAPI bool isDefaultPiece() const;

    MCNAPI bool isPieceTypeX(::SharedTypes::persona::PieceType) const;

    MCNAPI bool isPlatformLocked() const;

    MCNAPI bool isTitleLocked() const;

    MCNAPI bool isValid() const;

    MCNAPI bool loadGeometryFileJson(::Json::Value&) const;

    MCNAPI bool operator!=(::PersonaPiece const&) const;

    MCNAPI bool operator==(::PersonaPiece const&) const;

    MCNAPI void setPackIdVersion(::PackIdVersion const&);

    MCNAPI void setPieceId(::mce::UUID const&);

    MCNAPI void setPieceNameAsLocKey(std::string const&);

    MCNAPI void setPlatformLock(bool);

    MCNAPI void setTitleLock(bool);

    MCNAPI ~PersonaPiece();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI PersonaPiece();

    MCNAPI PersonaPiece(::PersonaPiece&&);

    MCNAPI PersonaPiece(
        ::std::string const&              pieceId,
        ::PackIdVersion const&            packIdVersion,
        ::SharedTypes::persona::PieceType pieceTypeId,
        ::std::weak_ptr<::Pack const>     sourcePack,
        bool                              platformLocked,
        bool                              titleLocked,
        bool                              allowsTintOverride
    );

    MCNAPI ::std::string getPieceName() const;

    MCNAPI ::std::string getPieceTypeAsString() const;

    MCNAPI ::TintMapColor getTintBaseColor() const;

    MCNAPI bool getTintMapColor(::TintMapColor& tintColor) const;

    MCNAPI void initLocalizationDictionary();

    MCNAPI bool isDefaultPiece() const;

    MCNAPI bool isValid() const;

    MCNAPI bool loadGeometryFileJson(::Json::Value& outJson) const;

    MCNAPI void setPackIdVersion(::PackIdVersion const& packIdVersion);

    MCNAPI void setPieceId(::mce::UUID const& pieceId);

    MCNAPI void setPieceNameAsLocKey(::std::string const& pieceName);

    MCNAPI ~PersonaPiece();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::PersonaPiece const& getInvalidPiece();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::PersonaPiece const& getInvalidPiece();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::PersonaPiece const&);

    MCNAPI void* $ctor(::PersonaPiece&&);

    MCNAPI void* $ctor(
        std::string const&,
        ::PackIdVersion const&,
        ::SharedTypes::persona::PieceType,
        std::weak_ptr<const Pack>,
        bool,
        bool,
        bool
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::PersonaPiece&&);

    MCNAPI void* $ctor(
        ::std::string const&              pieceId,
        ::PackIdVersion const&            packIdVersion,
        ::SharedTypes::persona::PieceType pieceTypeId,
        ::std::weak_ptr<::Pack const>     sourcePack,
        bool                              platformLocked,
        bool                              titleLocked,
        bool                              allowsTintOverride
    );
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
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
