#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/beta/atomic_client_entity/ScriptDescription.h"

namespace SharedTypes::Beta::AtomicClientEntity {

struct AtomicClientEntityDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                                mIdentifier;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::string>>                         mMaterials;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::string>>                         mTextures;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::string>>                         mGeometry;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::string>>                         mAnimations;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::string>>                         mParticleEffects;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::string>>                         mSoundEffects;
    ::ll::TypedStorage<8, 72, ::SharedTypes::Beta::AtomicClientEntity::ScriptDescription> mScripts;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                                   mRenderControllers;
    // NOLINTEND
};

} // namespace SharedTypes::Beta::AtomicClientEntity
