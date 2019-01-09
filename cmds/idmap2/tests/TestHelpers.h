/*
 * Copyright (C) 2018 The Android Open Source Project
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

#ifndef IDMAP2_TESTS_TESTHELPERS_H_
#define IDMAP2_TESTS_TESTHELPERS_H_

#include <string>

namespace android {
namespace idmap2 {

const unsigned char idmap_raw_data[] = {
    // IDMAP HEADER
    // 0x0: magic
    0x49, 0x44, 0x4d, 0x50,

    // 0x4: version
    0x01, 0x00, 0x00, 0x00,

    // 0x8: target crc
    0x34, 0x12, 0x00, 0x00,

    // 0xc: overlay crc
    0x78, 0x56, 0x00, 0x00,

    // 0x10: target path "target.apk"
    0x74, 0x61, 0x72, 0x67, 0x65, 0x74, 0x2e, 0x61, 0x70, 0x6b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    // 0x110: overlay path "overlay.apk"
    0x6f, 0x76, 0x65, 0x72, 0x6c, 0x61, 0x79, 0x2e, 0x61, 0x70, 0x6b, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

    // DATA HEADER
    // 0x210: target package id
    0x7f, 0x00,

    // 0x212: types count
    0x02, 0x00,

    // DATA BLOCK
    // 0x214: target type
    0x02, 0x00,

    // 0x216: overlay type
    0x02, 0x00,

    // 0x218: entry count
    0x01, 0x00,

    // 0x21a: entry offset
    0x00, 0x00,

    // 0x21c: entries
    0x00, 0x00, 0x00, 0x00,

    // DATA BLOCK
    // 0x220: target type
    0x03, 0x00,

    // 0x222: overlay type
    0x03, 0x00,

    // 0x224: entry count
    0x03, 0x00,

    // 0x226: entry offset
    0x03, 0x00,

    // 0x228, 0x22c, 0x230: entries
    0x00, 0x00, 0x00, 0x00,

    0xff, 0xff, 0xff, 0xff,

    0x01, 0x00, 0x00, 0x00};

const unsigned int idmap_raw_data_len = 565;

const std::string GetTestDataPath();

class Idmap2Tests : public testing::Test {
 protected:
  virtual void SetUp() {
#ifdef __ANDROID__
    tmp_dir_path_ = "/data/local/tmp/idmap2-tests-XXXXXX";
#else
    tmp_dir_path_ = "/tmp/idmap2-tests-XXXXXX";
#endif
    EXPECT_NE(mkdtemp(const_cast<char*>(tmp_dir_path_.c_str())), nullptr)
        << "Failed to create temporary directory: " << strerror(errno);
    target_apk_path_ = GetTestDataPath() + "/target/target.apk";
    overlay_apk_path_ = GetTestDataPath() + "/overlay/overlay.apk";
    idmap_path_ = tmp_dir_path_ + "/a.idmap";
  }

  virtual void TearDown() {
    EXPECT_EQ(rmdir(tmp_dir_path_.c_str()), 0)
        << "Failed to remove temporary directory " << tmp_dir_path_ << ": " << strerror(errno);
  }

  const std::string& GetTempDirPath() {
    return tmp_dir_path_;
  }

  const std::string& GetTargetApkPath() {
    return target_apk_path_;
  }

  const std::string& GetOverlayApkPath() {
    return overlay_apk_path_;
  }

  const std::string& GetIdmapPath() {
    return idmap_path_;
  }

 private:
  std::string tmp_dir_path_;
  std::string target_apk_path_;
  std::string overlay_apk_path_;
  std::string idmap_path_;
};

}  // namespace idmap2
}  // namespace android

#endif  // IDMAP2_TESTS_TESTHELPERS_H_
