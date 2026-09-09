#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EduCloud {

enum class UploadWorldProgress : int {
    Starting  = 0,
    Packaging = 1,
    Uploading = 2,
    Completed = 3,
};

}
