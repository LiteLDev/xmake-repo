#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LessonItem;
// clang-format on

class LessonItemCache : public ::std::enable_shared_from_this<LessonItemCache> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, std::mutex>                                                 mMutex;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::weak_ptr<LessonItem>>> mActiveItems;
    // NOLINTEND
};
