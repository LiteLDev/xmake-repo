#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/certificates/identity/RawGameServerToken.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/client/gui/oreui/binding/queries/core/PlatformType.h"
#endif // @header-generator platform
#include "mc/deps/certificates/WebToken.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/platform/PlatformType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/input/InputMode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/PieceType.h"
#else // @header-generator platform
#include "mc/deps/json/Value.h"
#include "mc/deps/shared_types/persona/PieceType.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class AnimatedImageData;
class MinEngineVersion;
class SerializedPersonaPieceHandle;
class TintMapColor;
struct ConnectionAuthInfo;
struct ConnectionSkinInfo;
#if defined(LL_PLAT_A) // @header-generator platform
struct SyncedClientOptionsComponent;
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 112, std::optional<WebToken>> rawToken;
        ::ll::UntypedStorage<8, 16>                         authData;
#else // @header-generator platform
        ::ll::TypedStorage<8, 136, ::std::optional<::WebToken>> rawToken;
        ::ll::TypedStorage<8, 16, ::Json::Value>                authData;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~ParsedConnectionString();
#else // @header-generator platform
        MCAPI ~ParsedConnectionString();
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
    ::ll::TypedStorage<8, 112, std::optional<WebToken>>  mRawToken;
    ::ll::UntypedStorage<8, 24>                          mUnverifiedGameServerToken;
    ::ll::TypedStorage<4, 4, ::PlayerAuthenticationType> mAuthenticationType;
#else // @header-generator platform
    ::ll::TypedStorage<8, 136, ::std::optional<::WebToken>> mRawToken;
    ::ll::TypedStorage<8, 32, ::RawGameServerToken>         mUnverifiedGameServerToken;
    ::ll::TypedStorage<4, 4, ::PlayerAuthenticationType>    mAuthenticationType;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BaseConnectionRequest(::BaseConnectionRequest const&);
#else // @header-generator platform
    MCAPI BaseConnectionRequest(::BaseConnectionRequest const& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BaseConnectionRequest(std::optional<WebToken>, ::Json::Value const&);
#else // @header-generator platform
    MCAPI BaseConnectionRequest(::std::optional<::WebToken> rawToken, ::Json::Value const& authentication);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::RawGameServerToken const& _getGameServerToken() const;
#else // @header-generator platform
    MCAPI bool _isUsingRestrictedIds() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WebToken const& _getRawRequest() const;
#else // @header-generator platform
    MCAPI ::std::vector<::AnimatedImageData> getAnimatedImageData() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _isUsingRestrictedIds() const;
#else // @header-generator platform
    MCAPI ::std::string getArmSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<AnimatedImageData> getAnimatedImageData() const;
#else // @header-generator platform
    MCAPI ::std::vector<uchar> getCapeData() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getArmSize() const;
#else // @header-generator platform
    MCAPI ::std::string getCapeId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PlayerAuthenticationType getAuthenticationType() const;
#else // @header-generator platform
    MCAPI ushort getCapeImageHeight() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<uchar> getCapeData() const;
#else // @header-generator platform
    MCAPI ushort getCapeImageWidth() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getCapeId() const;
#else // @header-generator platform
    MCAPI uint64 getClientRandomId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ushort getCapeImageHeight() const;
#else // @header-generator platform
    MCAPI ::InputMode getCurrentInputMode() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ushort getCapeImageWidth() const;
#else // @header-generator platform
    MCAPI ::std::string getDeviceId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SyncedClientOptionsComponent getClientOptions() const;
#else // @header-generator platform
    MCAPI ::BuildPlatform getDeviceOS() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong getClientRandomId() const;
#else // @header-generator platform
    MCAPI ::std::string getLanguageCode() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InputMode getCurrentInputMode() const;
#else // @header-generator platform
    MCAPI ::std::optional<::Social::Nonce> getNonce() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getDeviceId() const;
#else // @header-generator platform
    MCAPI ::std::vector<::SerializedPersonaPieceHandle> getPersonaPieces() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BuildPlatform getDeviceOS() const;
#else // @header-generator platform
    MCAPI ::std::unordered_map<::SharedTypes::persona::PieceType, ::TintMapColor> getPieceTintColors() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getLanguageCode() const;
#else // @header-generator platform
    MCAPI ::std::string getPlatformId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Social::Nonce> getNonce() const;
#else // @header-generator platform
    MCAPI ::std::string getPlatformOfflineId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<SerializedPersonaPieceHandle> getPersonaPieces() const;
#else // @header-generator platform
    MCAPI ::std::string getPlatformOnlineId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_map<SharedTypes::persona::PieceType, TintMapColor> getPieceTintColors() const;
#else // @header-generator platform
    MCAPI ::PlatformType getPlatformType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getPlatformId() const;
#else // @header-generator platform
    MCAPI ::std::string getProfileHash() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getPlatformOfflineId() const;
#else // @header-generator platform
    MCAPI ::std::string getSelfSignedId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getPlatformOnlineId() const;
#else // @header-generator platform
    MCAPI ::std::string getSkinAnimationData() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PlatformType getPlatformType() const;
#else // @header-generator platform
    MCAPI ::mce::Color getSkinColor() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getProfileHash() const;
#else // @header-generator platform
    MCAPI ::std::vector<uchar> getSkinData() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getSelfSignedId() const;
#else // @header-generator platform
    MCAPI ::std::string getSkinGeometry() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getSkinAnimationData() const;
#else // @header-generator platform
    MCAPI ::MinEngineVersion getSkinGeometryMinEngineVersion() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::mce::Color getSkinColor() const;
#else // @header-generator platform
    MCAPI ::std::string getSkinId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<uchar> getSkinData() const;
#else // @header-generator platform
    MCAPI ushort getSkinImageHeight() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getSkinGeometry() const;
#else // @header-generator platform
    MCAPI ushort getSkinImageWidth() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MinEngineVersion getSkinGeometryMinEngineVersion() const;
#else // @header-generator platform
    MCAPI ::std::string getSkinResourcePatch() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getSkinId() const;
#else // @header-generator platform
    MCAPI ::std::string getThirdPartyName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ushort getSkinImageHeight() const;
#else // @header-generator platform
    MCAPI bool isCapeOnClassicSkin() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ushort getSkinImageWidth() const;
#else // @header-generator platform
    MCAPI bool isCompatibleWithClientSideChunkGen() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getSkinResourcePatch() const;
#else // @header-generator platform
    MCAPI bool isOverrideSkin() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getThirdPartyName() const;
#else // @header-generator platform
    MCAPI bool isPersonaSkin() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isCapeOnClassicSkin() const;
#else // @header-generator platform
    MCAPI bool isPremiumSkin() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isCompatibleWithClientSideChunkGen() const;
#else // @header-generator platform
    MCAPI bool isTrustedSkin() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isOverrideSkin() const;
#else // @header-generator platform
    MCAPI bool isWellFormed() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isPersonaSkin() const;

    MCNAPI bool isPremiumSkin() const;

    MCNAPI bool isTrustedSkin() const;

    MCNAPI bool isWellFormed() const;

    MCNAPI std::string toString();
#else // @header-generator platform
    MCAPI ::std::string toString();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Json::Value _createAuthJson(::ConnectionAuthInfo const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::Json::Value _createAuthJson(::ConnectionAuthInfo const& authInfo);

    MCAPI static void _fillPersonaJson(::Json::Value& root, ::ConnectionSkinInfo const& skinInfo);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _fillPersonaJson(::Json::Value&, ::ConnectionSkinInfo const&);

    MCNAPI static ::BaseConnectionRequest::ParsedConnectionString _parseConnectionString(std::string const&);
#else // @header-generator platform
    MCAPI static ::BaseConnectionRequest::ParsedConnectionString _parseConnectionString(::std::string const& str);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BaseConnectionRequest const&);
#else // @header-generator platform
    MCAPI void* $ctor(::BaseConnectionRequest const& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::optional<WebToken>, ::Json::Value const&);
#else // @header-generator platform
    MCAPI void* $ctor(::std::optional<::WebToken> rawToken, ::Json::Value const& authentication);
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
