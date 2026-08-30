#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/certificates/identity/RawGameServerToken.h"
#include "mc/deps/certificates/WebToken.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/platform/PlatformType.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/shared_types/PieceType.h"

// auto generated forward declare list
// clang-format off
class AnimatedImageData;
class MinEngineVersion;
class SerializedPersonaPieceHandle;
class TintMapColor;
struct ConnectionAuthInfo;
struct ConnectionSkinInfo;
struct SyncedClientOptionsComponent;
namespace Json { class Value; }
namespace Social { struct Nonce; }
namespace mce { class Color; }
// clang-format on

class BaseConnectionRequest {
public:
    // BaseConnectionRequest inner types declare
    // clang-format off
    struct ParsedConnectionString;
    // clang-format on

    // BaseConnectionRequest inner types define
    struct ParsedConnectionString {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 112, std::optional<WebToken>> rawToken;
        ::ll::UntypedStorage<8, 16>                         authData;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ParsedConnectionString();
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
    ::ll::TypedStorage<8, 112, std::optional<WebToken>>  mRawToken;
    ::ll::UntypedStorage<8, 24>                          mUnverifiedGameServerToken;
    ::ll::TypedStorage<4, 4, ::PlayerAuthenticationType> mAuthenticationType;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseConnectionRequest& operator=(BaseConnectionRequest const&);
    BaseConnectionRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseConnectionRequest();

    virtual bool _isAuthTypeWellFormed() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseConnectionRequest(::BaseConnectionRequest const&);

    MCNAPI BaseConnectionRequest(std::optional<WebToken>, ::Json::Value const&);

    MCNAPI ::RawGameServerToken const& _getGameServerToken() const;

    MCNAPI ::WebToken const& _getRawRequest() const;

    MCNAPI bool _isUsingRestrictedIds() const;

    MCNAPI std::vector<AnimatedImageData> getAnimatedImageData() const;

    MCNAPI std::string getArmSize() const;

    MCNAPI ::PlayerAuthenticationType getAuthenticationType() const;

    MCNAPI std::vector<uchar> getCapeData() const;

    MCNAPI std::string getCapeId() const;

    MCNAPI ushort getCapeImageHeight() const;

    MCNAPI ushort getCapeImageWidth() const;

    MCNAPI ::SyncedClientOptionsComponent getClientOptions() const;

    MCNAPI ulong getClientRandomId() const;

    MCNAPI ::InputMode getCurrentInputMode() const;

    MCNAPI std::string getDeviceId() const;

    MCNAPI ::BuildPlatform getDeviceOS() const;

    MCNAPI std::string getLanguageCode() const;

    MCNAPI std::optional<Social::Nonce> getNonce() const;

    MCNAPI std::vector<SerializedPersonaPieceHandle> getPersonaPieces() const;

    MCNAPI std::unordered_map<SharedTypes::persona::PieceType, TintMapColor> getPieceTintColors() const;

    MCNAPI std::string getPlatformId() const;

    MCNAPI std::string getPlatformOfflineId() const;

    MCNAPI std::string getPlatformOnlineId() const;

    MCNAPI ::PlatformType getPlatformType() const;

    MCNAPI std::string getProfileHash() const;

    MCNAPI std::string getSelfSignedId() const;

    MCNAPI std::string getSkinAnimationData() const;

    MCNAPI ::mce::Color getSkinColor() const;

    MCNAPI std::vector<uchar> getSkinData() const;

    MCNAPI std::string getSkinGeometry() const;

    MCNAPI ::MinEngineVersion getSkinGeometryMinEngineVersion() const;

    MCNAPI std::string getSkinId() const;

    MCNAPI ushort getSkinImageHeight() const;

    MCNAPI ushort getSkinImageWidth() const;

    MCNAPI std::string getSkinResourcePatch() const;

    MCNAPI std::string getThirdPartyName() const;

    MCNAPI bool isCapeOnClassicSkin() const;

    MCNAPI bool isCompatibleWithClientSideChunkGen() const;

    MCNAPI bool isOverrideSkin() const;

    MCNAPI bool isPersonaSkin() const;

    MCNAPI bool isPremiumSkin() const;

    MCNAPI bool isTrustedSkin() const;

    MCNAPI bool isWellFormed() const;

    MCNAPI std::string toString();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Json::Value _createAuthJson(::ConnectionAuthInfo const&);

    MCNAPI static void _fillPersonaJson(::Json::Value&, ::ConnectionSkinInfo const&);

    MCNAPI static ::BaseConnectionRequest::ParsedConnectionString _parseConnectionString(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BaseConnectionRequest const&);

    MCNAPI void* $ctor(std::optional<WebToken>, ::Json::Value const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
