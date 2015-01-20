/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class <MusicGeniusMixQueueFeederDataSource>;

@interface MusicGeniusMixQueueFeeder : MusicQueryQueueFeeder {
    unsigned long long _currentPlaylistOffset;
    <MusicGeniusMixQueueFeederDataSource> *_dataSource;
}

@property(retain) <MusicGeniusMixQueueFeederDataSource> * dataSource;

- (void).cxx_destruct;
- (bool)_configureWithMixPlaylist:(id)arg1 playbackContext:(id)arg2 startPlayback:(bool)arg3;
- (void)archiveAVControllerPlaybackQueue:(id)arg1 toArchiver:(id)arg2;
- (id)dataSource;
- (unsigned long long)indexOfMediaItem:(id)arg1;
- (unsigned long long)itemCount;
- (id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
- (id)localizedPositionInPlaylistString:(id)arg1;
- (id)mediaItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfPaths;
- (id)pathAtIndex:(unsigned long long)arg1;
- (id)query;
- (unsigned long long)realRepeatType;
- (bool)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(bool)arg2;
- (void)restoreAVControllerPlaybackQueue:(id)arg1 fromUnarchiver:(id)arg2;
- (void)setDataSource:(id)arg1;
- (void)shuffleItemsWithAnchor:(unsigned long long*)arg1;
- (unsigned long long)shuffleType;
- (bool)userCanChangeShuffleAndRepeatType;

@end