                               即将做

                               解决日志
添加任务完成情况（需要服务器修改数据表)            以后再做
签到全是上班。。数据也是一样                     需要对对象进行深拷贝
签到地址存入数据库全部一样                       主键一样，冲突了
退出圈子后圈子数组不更新                        先删除再添加就会触发回调
文件下载下来存不了本地                          本地文件夹没有创建
导航栏显示混乱                                 统一用self.navigationController隐藏和显          示导航栏
讨论组设置中保存到通讯录/取消保存 连续操作会崩溃     直接用数据库读出来的对象进行添加和删除
任务同步偶尔出现不是对象存进数据库的情况            FetchedResultsController查询条件设为nil，自己来处理
莫名其妙的字段赋值为nil                         全部用mj_keyValues
有时出现数据不是最新的情况                       全部用_userManager不要用UserManager manager
时间差8个小时的解决方法                         我们用NSDate分类来取得时/分/秒来进行加减运算就避免了这个问题，不要用求余的方法来计算一天中的多少时间（切记），根本不需要进行时区转换
UITableViewCell里面的某个标签隐藏了            圆角方法用具体的数字
融云聊天界面键盘消失后界面变空白                 升级融云到2.7.3

                               第三方库
BMDeviceActivityManager             检测屏幕亮起和熄灭的库
IFLY                                讯飞语音

                              有用的技术点
iOS给Core Image增加了两种人脸检测功能：CIDetectorEyeBlink以及CIDetectorSmile
UIScreenEdgePanGestureRecognizer 继承自UIPanGestureRecognizer ，它可以让你从屏幕边界即可检测手势
我们现在可以使用 UIDocumentPickerViewController 来从第三方存储 (以及第三方 app 通过应用扩展所实现的存储) 中选取文件。
动态监测内存泄漏MLeaksFinder
离屏渲染如有问题，用UIImageView+CornerRadius解决
响应式编程ReactiveCocoa来改善用户体验
利用JSPath来实现热更新，目前我们没有这个需求
利用路由解耦，目前只解了日程详情，登录\欢迎\业务这几个，后面有时间再解
控制器瘦身，分离代理协议
