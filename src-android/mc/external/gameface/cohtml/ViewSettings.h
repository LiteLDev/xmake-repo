#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace cohtml {

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

} // namespace cohtml
