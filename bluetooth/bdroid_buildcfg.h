/*
 * Copyright 2013 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _BDROID_BUILDCFG_H
#define _BDROID_BUILDCFG_H

#define BTA_DISABLE_DELAY 100 /* in milliseconds */

#define BTA_AG_SCO_PKT_TYPES /* BTM_SCO_LINK_ALL_PKT_MASK */     \
  (BTM_SCO_LINK_ONLY_MASK | ESCO_PKT_TYPES_MASK_HV1 | \
   ESCO_PKT_TYPES_MASK_HV2 | ESCO_PKT_TYPES_MASK_HV3 | \
   ESCO_PKT_TYPES_MASK_EV3 | ESCO_PKT_TYPES_MASK_NO_3_EV3 | \
   ESCO_PKT_TYPES_MASK_NO_2_EV3 | ESCO_PKT_TYPES_MASK_NO_2_EV5 | \
   ESCO_PKT_TYPES_MASK_NO_3_EV5)

#define BTM_SCO_ENHANCED_SYNC_ENABLED FALSE
#define BTIF_HF_WBS_PREFERRED FALSE
#define BLE_VND_INCLUDED TRUE
#endif
