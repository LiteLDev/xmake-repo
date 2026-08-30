#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/objects/ActorShadowRenderObjectCollection.h"
#include "mc/deps/minecraft_renderer/objects/ChunkRenderObjectCollection.h"
#include "mc/deps/minecraft_renderer/objects/ClientRenderData.h"
#include "mc/deps/minecraft_renderer/objects/CloudRenderObject.h"
#include "mc/deps/minecraft_renderer/objects/CrackRenderObjectCollection.h"
#include "mc/deps/minecraft_renderer/objects/NameTagRenderObjectCollection.h"
#include "mc/deps/minecraft_renderer/objects/ParticleRenderObjectCollection.h"
#include "mc/deps/minecraft_renderer/objects/SkyRenderObject.h"
#include "mc/deps/minecraft_renderer/objects/ViewRenderData.h"
#include "mc/deps/minecraft_renderer/objects/WeatherRenderObject.h"

struct ViewRenderObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 140, ::ViewRenderData>                    mViewData;
    ::ll::TypedStorage<1, 1, ::ClientRenderData>                    mClientData;
    ::ll::TypedStorage<8, 80, ::CloudRenderObject>                  mCloudState;
    ::ll::UntypedStorage<8, 1280>                                   mChunksState;
    ::ll::TypedStorage<8, 128, ::ActorShadowRenderObjectCollection> mEntityShadowsState;
    ::ll::TypedStorage<8, 144, ::ParticleRenderObjectCollection>    mParticleState;
    ::ll::UntypedStorage<8, 320>                                    mSkyState;
    ::ll::UntypedStorage<8, 10848>                                  mWeatherState;
    ::ll::TypedStorage<8, 72, ::CrackRenderObjectCollection>        mCrackState;
    ::ll::TypedStorage<8, 40, ::NameTagRenderObjectCollection>      mNameTagState;
    // NOLINTEND

public:
    // prevent constructor by default
    ViewRenderObject& operator=(ViewRenderObject const&);
    ViewRenderObject();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ViewRenderObject(::ViewRenderObject&&);

    MCNAPI ~ViewRenderObject();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ViewRenderObject&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
