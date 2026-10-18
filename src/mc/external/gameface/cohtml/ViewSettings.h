#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/cohtml/Int64BindingModeType.h"
#include "mc/external/gameface/cohtml/Mode.h"
#include "mc/external/gameface/cohtml/RenderingTasksAvailableType.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class ITextInputHandler; }
namespace cohtml { class ITimeZoneProvider; }
namespace cohtml { class IViewListener; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
struct ViewSettings {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::cohtml::IViewListener*> Listener;
    ::ll::TypedStorage<8, 8, ::cohtml::ITimeZoneProvider*> TimezoneProvider;
    ::ll::TypedStorage<4, 4, uint> Width;
    ::ll::TypedStorage<4, 4, uint> Height;
    ::ll::TypedStorage<8, 8, void(*)(void*, uint, uint, ::cohtml::RenderingTasksAvailableType)> OnRenderingTasksAvailable;
    ::ll::TypedStorage<8, 8, double(*)(void*, uint)> OnMonotonicallyIncreasingTimeRequest;
    ::ll::TypedStorage<8, 8, void*> UserData;
    ::ll::TypedStorage<1, 1, bool> EnableComplexCSSSelectorsStyling;
    ::ll::TypedStorage<1, 1, bool> InterceptResourceRequests;
    ::ll::TypedStorage<4, 4, ::cohtml::InspectorNetworkTabSettings::Mode> InspectorNetworkTabMode;
    ::ll::TypedStorage<4, 4, uint> MinimumVertexBufferSize;
    ::ll::TypedStorage<4, 4, uint> MinimumIndexBufferSize;
    ::ll::TypedStorage<4, 4, uint> VertexIndexBufferRingSize;
    ::ll::TypedStorage<4, 4, uint> DoubleClickTime;
    ::ll::TypedStorage<8, 8, ::cohtml::ITextInputHandler*> TextInputHandler;
    ::ll::TypedStorage<4, 4, float> StartPanThreshold;
    ::ll::TypedStorage<1, 1, bool> ExecuteLayoutOnDedicatedThread;
    ::ll::TypedStorage<1, 1, bool> ExecuteCommandProcessingWithLayout;
    ::ll::TypedStorage<1, 1, bool> EnableComplexTextLayout;
    ::ll::TypedStorage<1, 1, bool> EnableUISurfacePartitioning;
    ::ll::TypedStorage<1, 1, bool> EnableImmediateLayout;
    ::ll::TypedStorage<1, 1, bool> EnableUnloadingOfHiddenImages;
    ::ll::TypedStorage<1, 1, bool> EnableGlobalSimpleOpacity;
    ::ll::TypedStorage<4, 4, ::cohtml::Int64BindingModeType> Int64BindingMode;
    ::ll::TypedStorage<8, 8, void const*> DeveloperOptions;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ViewSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk3c3d67;
    ::ll::UntypedStorage<8, 8> mUnk62b7c0;
    ::ll::UntypedStorage<4, 4> mUnk37492e;
    ::ll::UntypedStorage<4, 4> mUnk13e16d;
    ::ll::UntypedStorage<8, 8> mUnk2dfe52;
    ::ll::UntypedStorage<8, 8> mUnkf7a8de;
    ::ll::UntypedStorage<8, 8> mUnk95bcb1;
    ::ll::UntypedStorage<1, 1> mUnk6f6492;
    ::ll::UntypedStorage<1, 1> mUnk2903dc;
    ::ll::UntypedStorage<4, 4> mUnk12fde8;
    ::ll::UntypedStorage<4, 4> mUnk938a69;
    ::ll::UntypedStorage<4, 4> mUnk318d81;
    ::ll::UntypedStorage<4, 4> mUnk54e941;
    ::ll::UntypedStorage<4, 4> mUnk51351e;
    ::ll::UntypedStorage<8, 8> mUnk8ee319;
    ::ll::UntypedStorage<4, 4> mUnk3eb928;
    ::ll::UntypedStorage<1, 1> mUnk1e2d4a;
    ::ll::UntypedStorage<1, 1> mUnk270f23;
    ::ll::UntypedStorage<1, 1> mUnk43baf6;
    ::ll::UntypedStorage<1, 1> mUnke5c8ab;
    ::ll::UntypedStorage<1, 1> mUnk20da37;
    ::ll::UntypedStorage<1, 1> mUnkdf0b22;
    ::ll::UntypedStorage<1, 1> mUnka7170f;
    ::ll::UntypedStorage<4, 4> mUnkb94c31;
    ::ll::UntypedStorage<8, 8> mUnka6623e;
    // NOLINTEND

public:
    // prevent constructor by default
    ViewSettings& operator=(ViewSettings const&);
    ViewSettings(ViewSettings const&);
    ViewSettings();
};
#else // @header-generator platform
struct ViewSettings {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml
