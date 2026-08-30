#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/shared_types/BodySizeType.h"
#include "mc/deps/shared_types/PersonaPieceMeta.h"
#include "mc/deps/shared_types/PieceType.h"
#include "mc/platform/UUID.h"
#include "mc/resources/persona/PersonaAnimationDefinition.h"

// auto generated forward declare list
// clang-format off
class ILocalizationDictionary;
class Pack;
class TintMapColor;
namespace Core { template<typename T0, int T1> class BasicStackString; }
namespace Json { class Value; }
namespace Puv { template<typename T0, typename T1, typename T2, typename T3> class SlicedLoader; }
// clang-format on

class PersonaPiece {
public:
    // PersonaPiece inner types declare
    // clang-format off
    struct FilePaths;
    // clang-format on

    // PersonaPiece inner types define
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

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaPiece& operator=(PersonaPiece const&);

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PersonaPiece const& getInvalidPiece();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
